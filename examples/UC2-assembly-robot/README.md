# Model: uc2-assembly-robot

This model describes an assembly task performed by UC2, using our data model (see [data-format-specifications](https://github.com/convince-project/data-model/tree/main/data-format-specifications)).

In the model, we have a robot arm mounted on a mobile base and equipped with a two-finger gripper. The robot must pick blocks from a pick zone and place them in an assembly zone, repeating this indefinitely.

While moving a block, a fallen block anomaly may be detected, requiring the robot to execute a recovery maneuver before resuming. The BT continuously monitors for this anomaly using a `ReactiveSequence`, ensuring recovery is triggered even during an ongoing pick-and-place operation.

Two model variants are provided:
- `main`: the correct model, where the anomaly detection wrapper is a `ReactiveSequence`.
- `main_bug`: a buggy variant where the `ReactiveSequence` is replaced by a plain `Sequence`, so fallen block anomalies during the move operation are not detected reactively.

## Properties

* *executes_recovery_branch_or_success*: Within 20 seconds of a block abort event being signalled, either the recovery branch becomes active or the BT reports success.
* *move_success*: The BT eventually terminates with success. From how the environment is modelled, MoveBlock always succeeds after at most 3 attempts.

Both properties are expected to return 1.0 probability of being verified for `main`, and may fail for `main_bug`.

# Situation understanding

## Knowledge graph (OWL)

The `knowledge-graph-OWL` folder contains two OWL ontology files in RDF/XML format that describe the UC2 system using the CONVINCE knowledge graph schema:

* `convince knowledge graph-assembly.rdf`: the static system-level ontology. It declares the components of the assembly cell as individuals, together with their capabilities and the use-case context.
* `convince knowledge graph-assembly-run1.rdf`: a run-level extension that instantiates the objects and locations present in a specific execution (such as blocks, the kiln cart, specific locations, and so on).

## Anomaly classification and scene description (JSON)

The `anomaly-classification-and-scene-description` folder contains an example output of the situation-understanding pipeline in an alternative JSON-based format:

* `uc2_anomaly_identification_scene_description_model.json`: a structured record of one anomaly event. It captures whether an anomaly occurred, its category ID (following the taxonomy defined in the instruction prompts), whether a human was involved, and a scene description with the initial and final states of the pick table (objects present and their spatial relationships).

## VLM-based situation awareness pipeline (instruction prompts)

The `instruction` folder contains the prompt templates used to drive a Vision-Language Model (VLM) through the situation-awareness pipeline:

* `prompts_UC2.py`: defines three chained prompts.
  1. *Scan and video description*: asks the VLM to describe the top-down scan image and then narrate the pick event from the front-facing video feed.
  2. *Anomaly identification*: instructs the VLM to classify the failure according to the UC2 anomaly taxonomy (block not picked, foreign object, or unknown) and to flag human involvement.
  3. *Scene description (JSON)*: asks the VLM to populate the JSON schema above with the initial and final scene states inferred from its earlier descriptions.
