# Humanoid-Hand-
## About the Author & Project Motivation

This project represents my first major milestone in independent robotic engineering. As a 14-year-old aspiring engineer entering high school next year, my long-term academic goal is to pursue an engineering degree at institutions like MIT and ultimately build a career developing cutting-edge, human-centric technologies.

### Engineering Under Budget Constraints
A core philosophy of this project is **resource-constrained innovation**. The entire development process—from component sourcing to manufacturing—is completely self-funded. Operating without external sponsorships or a massive budget requires intense creative problem-solving. It forces me to prioritize highly efficient mechanical design, open-source documentation, and smart component selection over expensive, off-the-shelf industrial hardware.

This repository serves as a transparent, open-source documentation of my journey. It is proof that high-tech, modern humanoid systems can be engineered entirely from scratch through rigorous self-taught practices, persistent iteration, and a passion for robotics.


Engineering Logbook: Phase 1 (Conceptualization, CAD & Feedback Systems)
Days 1–3: Biomechanical Research & Architecture
• Objective: Define the mechanical framework and actuation logic for a humanoid finger structure.

• Research & Development: Analyzed biological hand kinematics and existing robotic prostheses. Determined that embedding motors directly into the finger joints adds excessive distal mass.

• Structural Decision: Selected an underactuated, antagonistic tendon-driven system.

• Mechanism: Actuation will be handled by a remote "forearm" housing containing the servos. Each servo will utilize a custom dual-pulley system. Rotational movement in one direction pulls the flexor tendon (Beuger) to actuate flexion, while the opposite rotation releases it and pulls the extensor tendon (Strecker) for extension.

• Future Scope: Identified the need for high-precision angular feedback at the joints to transition from open-loop to closed-loop control.

<img width="821" height="625" alt="Screenshot 2026-05-23 151136" src="https://github.com/user-attachments/assets/e37f3cd1-b1f2-4bd4-a13a-b47eae356d7a" />



Day 4: Digital Prototyping & Component Sourcing
• Objective: Initiate CAD modeling in Autodesk Inventor and select budget-optimized hardware.

• Hardware Selection: "I selected the MG994/MG995 servo series. We could consider a higher-quality model, but that would require an increased budget.. These provide an optimal cost-to-torque ratio, essential for a self-funded prototype, ensuring enough force for the tendon routing without overspending.

• Manufacturing Strategy: Evaluated FDM 3D printing platforms (Bambu Lab A1 vs. P1S). Decided on PETG filament due to its superior layer adhesion, impact resistance, and flexibility compared to standard PLA, which is critical for mechanical joints.

• CAD Progress: Successfully modeled the first custom dual-tendon pulley designed to mount directly onto the servo spline.

<img width="997" height="559" alt="Screenshot 2026-05-03 151541" src="https://github.com/user-attachments/assets/f81230a6-3118-4a7b-93b4-c29ac01624b3" />
<img width="1919" height="863" alt="Screenshot 2026-05-03 155056" src="https://github.com/user-attachments/assets/25acd5f2-902e-453b-a075-b8103c0f0716" />
<img width="1914" height="932" alt="image" src="https://github.com/user-attachments/assets/ee80fa6a-bd9a-447c-98b9-12012cbfd2b2" />


Day 5: Concept Inception & Actuation Strategy
• Objective: Design the initial conceptual mechanism of a single finger joint to evaluate a tendon-driven actuation system.

• Result: Completed (Conceptual Proof of Concept).

• Analysis: The core design introduces an antagonistic dual-tendon routing system utilizing integrated 3D-printed pulleys (spools). In this configuration, an anterior tendon is routed along the front to actuate joint flexion (bending), while a posterior tendon runs along the back to handle extension (straightening). To secure the joint pivots, M2 shoulder screws (precision dowel screws) were implemented to serve as the structural axes. Although the mechanical layout and cable-routing concept are theoretically sound, the initial CAD model requires tighter parametric constraints and precise tolerancing to ensure smooth pulley rotation and prevent tendon friction.

• Action Plan: Refine the phalanx structure to optimize pulley integration and establish precise clearance tolerances for the M2 shoulder screws.

<img width="1029" height="406" alt="image" src="https://github.com/user-attachments/assets/7d82c3c5-6a6a-4fc4-940b-f7cbd35edfce" />
<img width="1106" height="814" alt="image" src="https://github.com/user-attachments/assets/c230c0e2-fb5e-42e4-b6bf-411d532a1eb3" />
<img width="788" height="661" alt="Screenshot 2026-05-26 175655" src="https://github.com/user-attachments/assets/c807c446-2ae6-46b0-919d-580601aff0fd" />
<img width="645" height="566" alt="image" src="https://github.com/user-attachments/assets/fc9010b7-243b-47b1-ad98-f9f4c7004dd5" />


Day 6: Iteration 1 – Distal & Proximal Phalanges
• Objective: Design the base finger segment (proximal phalanx) and the fingertip (distal phalanx).

• Result: Rejected.

• Analysis: The initial geometry of the fingertip was mechanically unviable. The applied fillets were too aggressive, resulting in a bulbous shape that would negatively impact grip friction and precise object manipulation. Scrapped the sketch to redesign with stricter adherence to human anatomy.

• Action Plan: Redesign the distal phalanx geometry with optimized, flatter contact profiles to maximize surface friction and anthropomorphic fidelity.

<img width="441" height="365" alt="Screenshot 2026-04-30 230343" src="https://github.com/user-attachments/assets/9206bff5-a2f7-4ff1-86e6-85701aa9a638" />
<img width="787" height="651" alt="Screenshot 2026-04-30 230426" src="https://github.com/user-attachments/assets/f312e404-bd3b-472c-a7ab-513dc393d93f" />
<img width="787" height="651" alt="Screenshot 2026-04-30 230426" src="https://github.com/user-attachments/assets/cb6d11b9-e726-40b4-b8bf-047933adf9fd" />
<img width="826" height="457" alt="Screenshot 2026-05-08 225918" src="https://github.com/user-attachments/assets/5e0d6f44-39eb-4d8d-8e7b-d4907d9f0495" />
<img width="570" height="523" alt="Screenshot 2026-05-08 230935" src="https://github.com/user-attachments/assets/445a4265-5c02-4d7e-a051-5c7e8e1f65a4" />


Day 7-8 : Iteration 2 – Joint Integration & Tolerances
• Objective: Redesign the phalanx structure to integrate ball bearings for low-friction actuation.

• Result: Rejected.

• Analysis: The aesthetic and structural design was greatly improved, but the prototype failed due to incorrect dimensional tolerancing. The bearing housings were modeled with estimated dimensions, preventing a proper press-fit assembly.

• Action Plan: Abandon estimation and transition to strict parametric modeling using precise constraints.

<img width="650" height="773" alt="Screenshot 2026-05-19 212748" src="https://github.com/user-attachments/assets/ff88f8fc-8996-4cf6-ad09-ae34d260c373" />
<img width="575" height="544" alt="Screenshot 2026-05-20 161135" src="https://github.com/user-attachments/assets/4c75ff1f-6630-4fa3-b625-7c59905b1ab7" />
<img width="1633" height="450" alt="Screenshot 2026-05-21 183204" src="https://github.com/user-attachments/assets/94aeca30-487f-4fe8-9aee-38fed1b30373" />


Day 9: Iteration 3 – Optimized Parametric Design
• Objective: Finalize the base phalanx CAD model with correct manufacturing tolerances.

• Result: Success.

• Progress: Applied a strict 0.15mm tolerance to the bearing housings, compensating for P1S FDM dimensional inaccuracy (±0.1mm) and PETG material shrinkage (~0.04mm on 8mm OD), ensuring a perfect press-fit assembly. Utilized CAD symmetry tools to mirror the geometry, ensuring perfect bilateral alignment.

• Pending: Extrude internal routing channels through the solid body for the synthetic tendons.

<img width="1359" height="271" alt="Screenshot 2026-05-21 173727" src="https://github.com/user-attachments/assets/6e934e4e-4495-43dd-8673-94d7d975dc36" />
<img width="1040" height="374" alt="Screenshot 2026-05-21 191616" src="https://github.com/user-attachments/assets/d0148b4d-d4ed-425a-b457-86452a322930" />
<img width="1394" height="462" alt="Screenshot 2026-05-21 191722" src="https://github.com/user-attachments/assets/accc3a89-546a-4fe4-989b-2ccade870031" />
<img width="1919" height="1020" alt="Screenshot 2026-05-21 194514" src="https://github.com/user-attachments/assets/b959c22c-e0b6-432a-afd7-aadaa3c7772d" />
<img width="1918" height="910" alt="image" src="https://github.com/user-attachments/assets/141e5536-107f-4c80-b56e-1d637e4c2577" />



Day 10: Closed-Loop Control Integration & Hardware Acquisition
• Objective: Design a precision tracking system for finger joint angles.

• Sensor Selection: Transitioned from analog potentiometers to AS5600 Absolute Magnetic Encoders. This provides non-contact, high-precision I2C angular readings without mechanical wear.

• Hardware Sourcing: Ordered MR84ZZ micro ball bearings to minimize rotational friction at the knuckle joints.

• Design Challenge: Currently developing a mounting mechanism to embed a diametric magnet concentrically within the joint/bearing axis so the AS5600 sensor can accurately read the rotation of the phalanx.
<img width="699" height="831" alt="image" src="https://github.com/user-attachments/assets/69f974a1-edd5-4d26-994c-a5b83448e753" />

Day 11: Form-Factor Constraints & Custom Electronics Conception
• Objective: Adapt the magnetic encoding system to fit the strict spatial limitations of the finger phalanx.

• Design Bottleneck: Identified that the standard off-the-shelf AS5600 breakout module is too bulky to be integrated directly into the compact internal finger geometry. 

• Action Plan: Transition to designing a custom, highly miniaturized PCB layout around the bare AS5600 IC to drastically minimize the electronics footprint.

• Integration Strategy: Evaluate the optimal placement for the diametric magnet—either embedding it internally within the joint axis or integrating it into the external spindle hosting the MR84ZZ micro ball bearing. The custom sensor PCB will be housed within the adjacent phalanx section to maintain proper alignment and ensure precise, non-contact angular tracking.

<img width="1440" height="888" alt="Screenshot 2026-05-23 222126" src="https://github.com/user-attachments/assets/84078f8f-49f2-4c5b-9f05-e4247d6bcbde" />


Day 12: First-Time Custom PCB Design & KiCad Workflow Integration
• Objective: Design and layout a highly miniaturized custom PCB around the bare AS5600 IC from scratch using KiCad.

• Design Challenge: Navigating the complex KiCad schematic and layout workflow for the first time, and overcoming initial form-factor bottlenecks where the first board iteration exceeded the finger's strict spatial constraints.

• Action Plan: Successfully mastered the software's pipeline, optimized component routing, and aggressively downsized the PCB layout to achieve the required micro-scale footprint.

• Next Steps: Import the PCB dimensions into the 3D CAD model to verify a precise fit within the phalanx housing, integrate routing holes for the mechanical tendon system, and initiate the design phase for the next structural component.

<img width="1917" height="1012" alt="Screenshot 2026-05-24 213221" src="https://github.com/user-attachments/assets/fe428e4c-58d6-49ad-be17-23521a89f705" />
<img width="1329" height="725" alt="Screenshot 2026-05-24 213202" src="https://github.com/user-attachments/assets/98877ead-ee2c-4cf0-b0b0-20d2f7662646" />
<img width="1919" height="1029" alt="Screenshot 2026-05-24 213245" src="https://github.com/user-attachments/assets/5c8e178e-df27-4a00-a9ef-138dda7c8556" />
<img width="850" height="384" alt="Screenshot 2026-05-24 145245" src="https://github.com/user-attachments/assets/5b277fcd-f46d-40d8-ad8e-0128638b5716" />
<img width="1086" height="635" alt="Screenshot 2026-05-24 221806" src="https://github.com/user-attachments/assets/6477b830-56df-4e7e-b7ce-8c2c678b67dd" />


Day 13: Component Integration & Tactile Feedback Sourcing

Objective: Advance the multi-part digit assembly in CAD, integrate a tactile feedback sensor for grasp force regulation, and prepare the structure for tendon and bearing integration.

Result: In Progress.

Progress: Finalized the primary CAD model for the first finger segment; however, interference analysis revealed a geometric collision issue at the joint connection point during assembly. Initiated modeling on the adjacent finger segment, navigating complex design-for-manufacturability (DFM) constraints to ensure real-world mechanical viability. To implement a closed-loop touch system and prevent excessive gripping force, selected the YWBL-WH precision force sensor. Modeled a dedicated, high-precision mounting pocket within the digit to ensure flush and accurate sensor placement.

Pending: Resolve the component collision to ensure clean joint clearance, finalize the secondary segment geometry, and extrude internal routing channels for the synthetic tendon system. Conduct physical fitment and tolerance verification once the ball bearings arrive on Thursday.

<img width="1896" height="976" alt="Screenshot 2026-05-25 211906" src="https://github.com/user-attachments/assets/938e036c-1a61-49fe-9749-4166b88005b5" />
<img width="930" height="606" alt="Screenshot 2026-05-25 211948" src="https://github.com/user-attachments/assets/e416fc6b-8aea-4f3d-8320-5d513436bf93" />
<img width="1203" height="607" alt="image" src="https://github.com/user-attachments/assets/7bf779df-cb94-45ee-8977-b32c0d6f7e9c" />


Day 14: Sensor Upgrades & PCB Integration Planning
Objective: Optimize sensor selection for joint position and tactile feedback, resolve kinematic collisions in the CAD assembly, and initiate custom circuit design.

Result: In Progress.

Progress: Evaluated and upgraded the magnetic encoder specification from the AS5600 to the higher-resolution AS5048A for improved joint tracking, identifying the MT6701 as a compact contingency option pending spatial constraints. Sourced the FSR 400 Short (Force Sensing Resistor) for fingertip tactile feedback, selected for its reliable force-response and control integration. Initiated the schematic design for the custom sensor circuit board. Additionally, performed interference analysis on the connected multi-part CAD assembly, identifying and resolving initial geometric collisions to optimize joint kinematics.

Pending: Finalize the custom PCB layout and import the board geometry directly into the CAD environment to verify physical fitment. Resolve the remaining mechanical interferences in the digit assembly. Engineer the internal routing pathways to accommodate both the synthetic tendon mechanisms and sensor cable management.


<img width="1919" height="868" alt="Screenshot 2026-05-27 132834" src="https://github.com/user-attachments/assets/8a7e58d7-a88f-4a03-a788-5cbbcd4e2efd" />
<img width="1191" height="716" alt="Screenshot 2026-05-27 184247" src="https://github.com/user-attachments/assets/0ce0593c-107c-49b9-a837-91ff4c3fdad5" />
<img width="1063" height="492" alt="Screenshot 2026-05-27 184237" src="https://github.com/user-attachments/assets/047bb5e4-4596-4f7d-aeb8-48cb6989a68b" />
<img width="1133" height="780" alt="Screenshot 2026-05-27 191037" src="https://github.com/user-attachments/assets/14dfcf6d-8c8b-4d26-900a-518a567dd3d9" />
<img width="1279" height="489" alt="Screenshot 2026-05-27 191616" src="https://github.com/user-attachments/assets/60cab05d-ab32-4106-aa5d-c12d14d93844" />
<img width="1017" height="563" alt="Screenshot 2026-05-27 191626" src="https://github.com/user-attachments/assets/f3b32ecd-d3a8-426b-a606-ccada9e392ae" />
<img width="805" height="485" alt="Screenshot 2026-05-27 191638" src="https://github.com/user-attachments/assets/cda3c492-09e3-4451-a8b4-84ea2172b72e" />



Day 15: PCB Iteration 2 & Kinematic Routing Strategy
Objective: Redesign the custom micro-PCB for the AS5048A magnetic encoder to meet strict internal digit dimensions following an oversized initial draft, and evaluate strain-free cable routing strategies.

Result: In Progress / Review Phase.

Progress: This marks the second iteration of the sensor board; the initial layout was rejected for exceeding the maximum dimensional tolerances of the internal digit cavity. For this revision, navigated severe spatial constraints to successfully draft a viable, ultra-compact circuit board (12mm x 6.75mm / 0.47" x 0.27") in KiCad. The layout integrates the AS5048A 14-bit magnetic encoder configured for SPI communication, alongside the required 10µF and 100nF decoupling capacitors. While the layout is functionally complete, it requires further optimization of the pads and wire connection points to ensure reliable micro-soldering and signal integrity. Concurrently, analyzed mechanical wire routing options to prevent parasitic strain or mechanical resistance on the joints, comparing the viability of internal through-hole routing versus external channeling.

Pending: Refine the PCB trace routing and pad geometry. Finalize the structural cable routing strategy in CAD (internal vs. external) to guarantee zero interference with the tendon mechanism. Perform a final digital fitment verification before exporting Gerber files for fabrication via JLCPCB. Note: Open to peer feedback regarding the pad layout and internal cable management strategies prior to manufacturing.

[PCB_AS5048A.zip](https://github.com/user-attachments/files/28363985/PCB_AS5048A.zip)
<img width="879" height="686" alt="Screenshot 2026-05-28 155727" src="https://github.com/user-attachments/assets/489a60e1-b331-4f5e-80ae-ecfabfc6436f" />
<img width="884" height="502" alt="Screenshot 2026-05-28 175451" src="https://github.com/user-attachments/assets/0dc89368-d7e2-49a3-984c-cce7b2286d4e" />
<img width="1106" height="659" alt="Screenshot 2026-05-28 180658" src="https://github.com/user-attachments/assets/528a1746-8b63-4c45-91bc-be88ff7e14f8" />


Day 16: Industrial Design & Dimensional Constraint Synthesis
Objective: Synthesize organic aesthetic form with high-precision parametric constraints for the intermediate phalanx assembly.

Result: In Progress.

Progress: Encountered a design bottleneck regarding the dual optimization of component aesthetics and dimensional accuracy. Iterated on the intermediate phalanx geometry to balance a natural, visually cohesive humanoid profile with the strict, sub-millimeter clearances required for joint interoperability. Successfully translated spatial boundaries into precise CAD sketches, ensuring that the visual shell does not compromise the structural integrity or mechanical mating features of the digit.

Pending: Finalize the internal geometric features of the intermediate segment to anchor the joint mechanisms, ensuring the updated aesthetic profile accommodates the internal routing paths.


<img width="548" height="548" alt="Screenshot 2026-05-29 144418" src="https://github.com/user-attachments/assets/77230e6b-ac6b-4862-98cb-71470bbe925c" />
<img width="1371" height="308" alt="Screenshot 2026-05-29 171331" src="https://github.com/user-attachments/assets/d0cc99d8-964b-4361-acdb-dd7d90073822" />
<img width="1418" height="761" alt="Screenshot 2026-05-29 212053" src="https://github.com/user-attachments/assets/7c432c32-0a85-46ac-a85c-d831d1d8bdad" />



Day 17: Full Digit Assembly Finalization & Prototyping Preparation
Objective: Complete the intermediate phalanx geometry using standardized bearing retention mechanisms, map high-density internal routing, and establish a multi-phase additive manufacturing strategy.

Result: Success / Transitioning to Validation Phase.

Progress: Successfully finalized the CAD model for the intermediate phalanx, ensuring design consistency by integrating the standardized snap-fit bearing retention clip mechanism utilized in the other segments. Began defining the design parameters for the final remaining structural component of the finger assembly. To ensure zero-drag operation for the actuation servo motors, mapped out the co-routing path for both the high-tensile tendon lines and the dense sensor wiring harness inside the tight structural envelope. Organized the procurement of a dedicated 3D printer and established a two-phase material validation workflow: utilizing PLA for rapid form-and-fit dimensional verification, followed by PETG for the final functional components to withstand the mechanical stress and tension of the actuation system.

Pending: Model the final structural segment of the finger. Integrate the custom micro-PCB into the physical CAD assembly and optimize wire-to-servo clearance. Calibrate the 3D printer upon arrival to initiate physical tolerance testing.


<img width="1244" height="893" alt="Screenshot 2026-05-30 125715" src="https://github.com/user-attachments/assets/a57baaa2-b2ed-4392-848a-5f16d82dcd8b" />
<img width="1414" height="897" alt="Screenshot 2026-05-30 125728" src="https://github.com/user-attachments/assets/ae681828-3601-4536-a720-3d54248925f7" />
<img width="1500" height="797" alt="Screenshot 2026-05-30 125752" src="https://github.com/user-attachments/assets/42e8a25f-ae8b-48c6-a526-8ffdfc07328b" />
<img width="1032" height="791" alt="Screenshot 2026-05-30 125853" src="https://github.com/user-attachments/assets/d923bfc1-15fc-4de0-bfeb-fa4165ee35bf" />
<img width="923" height="626" alt="Screenshot 2026-05-30 170759" src="https://github.com/user-attachments/assets/667a690d-07ef-4a6f-81d5-44d37a99f2e0" />


Day 18: Magnetic Interference Mitigation & Anthropomorphic Joint Scaling
Objective: Eliminate ferromagnetic interference from the ball bearings on the magnetic encoder while maintaining strict anthropomorphic scaling constraints for the joint assembly.

Result: Design Breakthrough.

Progress: Identified a critical hardware conflict: the steel composition of the ball bearings causes magnetic flux distortion, which compromises the 14-bit angular tracking precision of the AS5048A encoder's diametral magnet. An initial isolation attempt using a 0.5mm PETG shielding wall outside the bearing inflated the joint width to 31mm, severely violating the target human scale (20–22mm).

Engineered a high-density packaging solution by optimizing the bearing geometry to an 11mm OD (Outer Diameter) / 7mm ID (Inner Diameter) specification. This allows the 6mm diametral magnet to be nested directly inside the inner race of the bearing, isolated by a custom 3D-printed PETG sleeve to isolate the magnetic field. This integration allows the encoder PCB to sit flush on the outer housing, reducing the final joint width to an anthropomorphic ~25mm and ensuring zero-error angular calibration. Additionally, resolved a critical procurement bottleneck by successfully sourcing the highly specialized diametral magnet dimensions after extensive vendor research.

Pending: Finalize the updated CAD layout with the new bearing and magnet tolerances. Order the custom components and prepare for physical magnetic field testing upon arrival.


<img width="1180" height="763" alt="Screenshot 2026-05-31 193110" src="https://github.com/user-attachments/assets/b6d3ad09-7426-46a2-9cbd-4ddc7028d1ca" />
<img width="1358" height="800" alt="Screenshot 2026-05-31 193349" src="https://github.com/user-attachments/assets/00a7d9cf-70e9-4c1b-a129-8a1e4fbfe9d6" />
<img width="863" height="667" alt="Screenshot 2026-05-31 193357" src="https://github.com/user-attachments/assets/ca9378f5-f14b-42d9-ad48-6b827522e2d8" />
<img width="895" height="666" alt="Screenshot 2026-05-31 193405" src="https://github.com/user-attachments/assets/fca3e361-c9bf-4645-a990-dddfc399dff7" />
<img width="919" height="608" alt="Screenshot 2026-05-31 193411" src="https://github.com/user-attachments/assets/1d1b1d37-ae3b-4b65-929d-9908df99384c" />
<img width="284" height="268" alt="Screenshot 2026-05-31 193416" src="https://github.com/user-attachments/assets/f1330103-e5bb-44cb-9660-4256bc3501fe" />
<img width="839" height="430" alt="Screenshot 2026-05-31 123331" src="https://github.com/user-attachments/assets/2815646e-5216-4f5c-8781-270bde473360" />
<img width="1772" height="783" alt="Screenshot 2026-05-31 141605" src="https://github.com/user-attachments/assets/9a4435f2-59d4-4ced-88c0-1cfdd85239a6" />



Day 19: Joint Spacing Optimization, Topology Recovery, and Circular PCB Migration
Objective: Integrate a custom axial spacer mechanism, recalibrate primary segment dimensions, and redesign the encoder PCB form factor for external cable routing.

Result: Success.

Progress: Engineered a custom 1mm mechanical spacer ring to eliminate the need for secondary washers within the joint assembly. Integrating this spacer required a proportional dimensional reduction of the main finger segment to maintain the correct overall length alignment. During this severe geometric modification, the CAD model suffered a catastrophic topology failure; however, full recovery was achieved via a redundant physical backup strategy (local USB hardware storage).

Additionally, widened the finger's structural base component to accommodate the updated 4x4mm diametral magnet (highlighted in orange within the CAD assembly). To finalize the sensor integration, migrated the encoder circuit design from a rectangular layout to a custom circular PCB. Mounting this round board directly to the external face of the joint isolates it from internal mechanics and establishes a clean routing path for cables to run along the chassis toward the base of the humanoid hand.

Pending: Finalize the trace routing on the new circular PCB layout in KiCad. Conduct a clearance check on the updated wide-base geometry to ensure full rotational freedom before exporting the final prototype files.

<img width="1338" height="845" alt="Screenshot 2026-06-03 161842" src="https://github.com/user-attachments/assets/ee1f09ab-d7bb-4679-8e93-d5cbc90a3630" />
<img width="903" height="682" alt="Screenshot 2026-06-03 175916" src="https://github.com/user-attachments/assets/23e150bc-63ec-4216-9c99-6a426cec2756" />
<img width="1164" height="815" alt="Screenshot 2026-06-03 183332" src="https://github.com/user-attachments/assets/3fc0ec10-4b03-40e7-a7b4-92fe558a0f67" />
<img width="729" height="550" alt="Screenshot 2026-06-03 200240" src="https://github.com/user-attachments/assets/190d0a62-ee8a-4cc8-b086-299619bd95ef" />
<img width="804" height="505" alt="Screenshot 2026-06-03 200244" src="https://github.com/user-attachments/assets/f4d70230-aaea-451b-9d3a-f7adc6e50ee0" />
<img width="918" height="777" alt="Screenshot 2026-06-03 200655" src="https://github.com/user-attachments/assets/9358efa6-ccce-43ea-876e-01f4e54f3b21" />
<img width="1512" height="780" alt="Screenshot 2026-06-03 200714" src="https://github.com/user-attachments/assets/e9cd1494-6778-4ad6-8223-e2521cceb6cb" />
<img width="778" height="650" alt="Screenshot 2026-06-03 201759" src="https://github.com/user-attachments/assets/9deac360-4539-4446-ad94-ffa1a7dd3b46" />
<img width="1039" height="612" alt="Screenshot 2026-06-03 202207" src="https://github.com/user-attachments/assets/db6aadb6-3243-41b2-814c-9f5ce29d0bcc" />


Day 20: Magnetic Saturation Resolution & Signal Architecture Evaluation
Objective: Mitigate sensor saturation issues caused by high-flux magnetic fields and evaluate a centralized transceiver/multiplexer architecture for multi-digit signal routing.

Result: Critical Pivot / In Progress.

Progress: Identified a major hardware incompatibility during data sheet verification: the 4x4mm magnet generates a magnetic flux density (1.17 - 1.20 units) that causes magnetic saturation on the initially selected AS5048A encoder. The sensor could only process this field strength if separated by an unviable $5\text{mm}$ air gap, expanding the joint width to an unacceptable 30mm

Successfully pivoted by transitioning to the Infineon TLE5012B 15-bit GMR (Giant Magnetoresistance) encoder. This chip natively supports higher magnetic flux densities without clipping, allowing for a flush, compact integration.

Concurrently, initiated the system architecture design to handle the high-density wiring loom (40+ signal lines). Began drafting a centralized transceiver bus-master PCB using the Infineon chip's multi-protocol capabilities to streamline data acquisition.

To optimize cognitive load given the complexity of this first-time custom circuit design, temporarily paused the transceiver layout to re-prioritize mechanical CAD integration of the new circular TLE5012B footprint.

Pending: Finalize the physical integration of the new 15-bit circular PCB into the CAD joint assembly. Resume the transceiver/multiplexer schematic design once the individual digit kinematics are locked in.



<img width="645" height="514" alt="Screenshot 2026-06-04 214925" src="https://github.com/user-attachments/assets/7250aea2-d930-431e-9e89-2d26a2513872" />
<img width="496" height="378" alt="Screenshot 2026-06-04 121044" src="https://github.com/user-attachments/assets/e17347ea-72de-43f1-8d52-864f4b7ecdd6" />
<img width="1770" height="953" alt="Screenshot 2026-06-04 125747" src="https://github.com/user-attachments/assets/f9b23da0-4291-40e0-9363-6687161217bc" />
<img width="1304" height="751" alt="Screenshot 2026-06-04 131812" src="https://github.com/user-attachments/assets/cf2468c0-4463-4470-8b2b-b10ff037f53a" />
<img width="948" height="637" alt="Screenshot 2026-06-04 150318" src="https://github.com/user-attachments/assets/f61c9ee4-b6fc-4972-9afb-2f30a59fe4ee" />
<img width="572" height="806" alt="Screenshot 2026-06-04 152838" src="https://github.com/user-attachments/assets/92859b02-43d6-4538-a8be-a90a061d1ee9" />
<img width="1718" height="931" alt="Screenshot 2026-06-04 154819" src="https://github.com/user-attachments/assets/41133ddb-9d35-466e-8cb5-801887f95501" />
<img width="949" height="719" alt="Screenshot 2026-06-04 190428" src="https://github.com/user-attachments/assets/02bef64c-a0ff-4a54-9b5a-d89e9748557d" />
<img width="710" height="521" alt="Screenshot 2026-06-04 191321" src="https://github.com/user-attachments/assets/82b8cd75-9216-4140-9f8d-68baf085ecd6" />
<img width="891" height="686" alt="Screenshot 2026-06-04 195343" src="https://github.com/user-attachments/assets/d932571b-8841-44c1-9419-118eebebbe28" />


Day 21: Enclosure Prototyping, Tendon Routing & Anthropomorphic Angulation
Objective: Validate the PCB spatial footprint, design a non-permanent protective enclosure, map internal Dyneema tendon channels, and initiate the angled fifth digit (pinky) base.

- Result: In Progress.

- Progress: Created a 3D volumetric CAD mock-up of the circular PCB to verify physical clearances within the joint assembly. Identified and resolved a spatial collision where the magnetic encoder IC intersected with the structural wall of the primary phalanx.

- Concurrently, initiated the design of a protective outer housing for the exposed PCB. To allow for continuous mechanical adjustments and perfect encoder recalibration, a non-permanent closure is strictly required. Traditional metal fasteners cannot be used due to magnetic flux distortion, so a 3D-printable, tool-less "snap-fit" mechanism is currently being evaluated to securely but temporarily lock the housing.

- In addition to the electronic packaging, engineered the internal mechanical routing by integrating dedicated guide holes through the finger structure to accommodate the high-tensile Dyneema tendon actuation system. Finally, began structural planning for the lower base phalanx of the fifth digit (pinky finger). To mimic natural human anthropometry, this component requires an inward adduction angle, the exact degree of which is currently pending further biomechanical evaluation.

- Pending: Finalize the snap-fit locking mechanism for the PCB housing and replicate this standardized enclosure across all joint assemblies. Determine the optimal inward angle for the fifth digit and refine the Dyneema routing paths.

<img width="646" height="634" alt="Screenshot 2026-06-05 204244" src="https://github.com/user-attachments/assets/efe62fe5-077c-48ef-8f59-a0e04d825b0c" />
<img width="1160" height="722" alt="Screenshot 2026-06-05 192247" src="https://github.com/user-attachments/assets/ed4d9b2c-df98-4596-9513-cf1575569465" />
<img width="754" height="634" alt="Screenshot 2026-06-05 173447" src="https://github.com/user-attachments/assets/f6abbd93-a267-4abf-b748-bcfd268dd608" />
<img width="791" height="728" alt="Screenshot 2026-06-05 173501" src="https://github.com/user-attachments/assets/bcd78803-ec62-4c91-94fb-a02cc2e4775f" />
<img width="1810" height="864" alt="Screenshot 2026-06-05 185416" src="https://github.com/user-attachments/assets/8b45ed11-ae4e-49c2-b211-558552b5d90b" />
<img width="646" height="634" alt="Screenshot 2026-06-05 204244" src="https://github.com/user-attachments/assets/c5e8c976-171f-44a6-9548-643e80462c3a" />
<img width="956" height="689" alt="Screenshot 2026-06-05 204239" src="https://github.com/user-attachments/assets/4deebbe5-f33b-48c3-9914-e2925fd02f72" />
<img width="1103" height="770" alt="Screenshot 2026-06-05 210530" src="https://github.com/user-attachments/assets/f3cc5cdf-31dd-4484-88fc-1590dbc2a512" />



Day 22: First Digit Assembly, Enclosure Trade-offs & Palm Chassis Initiation
Objective: Assemble the complete kinematic chain for the first digit in CAD, design the PCB enclosure, and initiate organic surface modeling for the main palm chassis.

- Result: Milestone Achieved / In Progress.

- Progress:
  - Enclosure Engineering: Designed a custom PCB housing featuring an overhanging lip with internal alignment pegs (bosses) for precise board positioning. Currently evaluating temporary retention methods like electrical     tape versus a permanent printed cap.
  - Form Factor Trade-off: Encountered a spatial bottleneck where the enclosure inflated the joint width to 30mm (exceeding the 21mm anthropomorphic human target). Accepted this limitation for the current prototype to avoid feature creep, scheduling the 21mm footprint for a "Version 2" redesign.
  - Kinematic Assembly: Successfully mated all individual sub-assemblies within Autodesk Inventor, completing the first fully functional digital kinematic finger model.
  - Organic Modeling: Initiated the design of the main hand palm, which presents a steep difficulty curve due to the complex, non-geometric organic surfaces required to replicate human anatomy.
  - Procurement Strategy: Shifted focus toward hardware acquisition to mitigate CAD fatigue. Actively monitoring Bambu Lab hardware sales to strategically invest personal funds into a 3D printer, transitioning the project into the physical prototyping phase.

- Pending: Finalize the base joint housing for the complete digit. Continue navigating the complex organic surface modeling for the palm chassis in Inventor. Procure the Bambu Lab 3D printer to transition from digital design to physical prototyping.

<img width="1650" height="810" alt="Screenshot 2026-06-06 174247" src="https://github.com/user-attachments/assets/1f26a166-10d8-4e87-ad73-15c5577df4d2" />
<img width="1081" height="618" alt="Screenshot 2026-06-06 214048" src="https://github.com/user-attachments/assets/be459929-dd4c-4ade-867f-459b301eb5f4" />
<img width="1120" height="851" alt="Screenshot 2026-06-06 101132" src="https://github.com/user-attachments/assets/14d8fc48-6c6d-419c-816e-78747227fcb6" />
<img width="1029" height="754" alt="Screenshot 2026-06-06 124701" src="https://github.com/user-attachments/assets/0f1e0d20-60b2-4422-b96e-748c21b8a5d5" />
<img width="1193" height="764" alt="Screenshot 2026-06-06 130006" src="https://github.com/user-attachments/assets/1943f02b-e5c8-4847-b777-a3710f24d49f" />
<img width="1018" height="667" alt="Screenshot 2026-06-06 130633" src="https://github.com/user-attachments/assets/588dda4c-9a56-4a1d-9a6e-5c42f1e9c22b" />
<img width="1309" height="860" alt="Screenshot 2026-06-06 131037" src="https://github.com/user-attachments/assets/f6dfefad-8103-4362-b66a-e367f05457f6" />
<img width="842" height="337" alt="Screenshot 2026-06-06 173915" src="https://github.com/user-attachments/assets/e135de4d-5acb-4351-803c-23aea5817113" />
<img width="1264" height="646" alt="Screenshot 2026-06-06 173926" src="https://github.com/user-attachments/assets/7bd774b4-7bfb-46ce-ab9d-274294101a6c" />


Day 23: Time-Tracking Integration, Palm Interface Design & Academic Balancing
Objective: Implement precise time-tracking infrastructure, establish the initial structural connection between the digit and the palm chassis, and manage the CAD roadmap alongside academic constraints.

- Result: Progress Made / Iterative Design Phase.

- Progress:

    - Time-Tracking Integration: Implemented Toggl to track development hours with high precision, ensuring complete transparency and strict compliance with the Macondo Hack Club time-reporting guidelines.

    - Academic Balancing: Managed project development velocity alongside a demanding school schedule, successfully balancing complex engineering tasks with upcoming exams and tests.

    - Palm Interface Design: Developed the initial mating interface on the palm chassis to connect the completed finger assembly. While functionally sound for this design sprint, the palm geometry will likely be slated for a future ergonomic redesign once the overall CAD phase concludes and programming begins.

    - Strategic Workflow Delay: Structured the remaining pipeline to prioritize finishing the primary CAD files over feature creep. The development of the complex thumb mechanics and the final tendon routing paths have been strategically deferred until the physical 3D printer is on-site.

    - Procurement Prioritization: Designated the 3D printer as the critical path item, pausing secondary component orders to ensure hardware availability is aligned with the completion of the digital assembly files.

- Pending: Finalize the palm chassis geometry. Design the PCB enclosure for the proximal phalanx (base segment) of the first digit, duplicate the standardized finger assemblies, and initiate modeling on the intermediate phalanx of the fifth digit (pinky).

<img width="737" height="561" alt="Screenshot 2026-06-07 192602" src="https://github.com/user-attachments/assets/c7a411fe-944f-4cec-924f-382e2720845d" />
<img width="1688" height="740" alt="Screenshot 2026-06-07 192806" src="https://github.com/user-attachments/assets/3b4f2d09-4515-44b2-a655-e1be6b822614" />
<img width="1269" height="728" alt="Screenshot 2026-06-07 200243" src="https://github.com/user-attachments/assets/09344392-5c2a-414f-b5ef-bf7a07d2fedb" />
<img width="1248" height="727" alt="Screenshot 2026-06-07 200330" src="https://github.com/user-attachments/assets/46babc0d-9a31-4402-8a48-85c88cc6f838" />
<img width="1273" height="623" alt="Screenshot 2026-06-07 201614" src="https://github.com/user-attachments/assets/09a2f439-77e2-41c5-90ec-6695f134a481" />
<img width="1028" height="821" alt="Screenshot 2026-06-07 202815" src="https://github.com/user-attachments/assets/e6a44dc8-02e6-4288-b9d7-d0516dee0a12" />
<img width="1368" height="767" alt="Screenshot 2026-06-07 202820" src="https://github.com/user-attachments/assets/fd2d15b8-d080-432e-a48b-4da8747b3d1d" />
<img width="830" height="810" alt="Screenshot 2026-06-07 203919" src="https://github.com/user-attachments/assets/102c02a0-a890-483e-91a5-cee58c0abddf" />

Day 24: Mechanical Leverage Optimization & PCB Cost Estimation
Objective: Redesign the palm chassis geometry based on mechanical torque constraints, iterate on the PCB housing, and conduct preliminary component cost analysis.

- Result: Progress Made / Structural Optimization.

- Progress:

    - Mechanical Leverage Optimization: Redesigned the palm chassis to be more compact. Recognized that an elongated, hyper-realistic palm profile would increase the moment arm (lever law), significantly increasing the torque requirements for the actuation motors. Shortening the geometry optimizes the mechanical advantage and reduces motor strain.

    - Enclosure Iteration: Developed an alternative variant of the PCB housing to improve component packaging and integration, with physical validation pending.

    - Prototyping Strategy: Confirmed that the current CAD generation serves as a functional proof-of-concept simulation. Final fine-tuning of fine tolerances, precision adjustments, and aesthetic details will be executed after initial 3D prints reveal real-world mechanical performance.

    - Financial Sourcing: Conducted initial market research and manufacturer pricing queries to estimate the production and fabrication costs of the custom encoder PCBs.

- Pending: Await the arrival of the 3D printer to begin physical fit-testing. Refine the alternative PCB housing variant and prepare the final file package for print validation.

<img width="1747" height="930" alt="Screenshot 2026-06-08 132105" src="https://github.com/user-attachments/assets/60742469-3e37-44d4-9760-1f69f10387ef" />
<img width="1088" height="775" alt="Screenshot 2026-06-08 141606" src="https://github.com/user-attachments/assets/abb5f94f-2853-40a6-9119-501b87691c73" />
<img width="696" height="540" alt="Screenshot 2026-06-08 141616" src="https://github.com/user-attachments/assets/02e7af64-cc03-4291-8712-5a54b22b8eaf" />
<img width="863" height="634" alt="Screenshot 2026-06-08 152008" src="https://github.com/user-attachments/assets/9002f78e-cd00-49ad-a56d-550f8002a9d0" />
<img width="1407" height="798" alt="Screenshot 2026-06-08 154928" src="https://github.com/user-attachments/assets/8c28781d-d5a1-40c8-aa11-ad0a1d529ed0" />
<img width="1182" height="546" alt="Screenshot 2026-06-08 153814" src="https://github.com/user-attachments/assets/fd3e127f-5d9e-47d0-8753-7c4d32862531" />
<img width="1083" height="654" alt="Screenshot 2026-06-08 171205" src="https://github.com/user-attachments/assets/36636094-6523-4017-a064-ab55e06bf9be" />
<img width="1093" height="640" alt="Screenshot 2026-06-08 181624" src="https://github.com/user-attachments/assets/b1b8e59e-fb16-4432-b25e-f37ab8f71642" />
<img width="332" height="509" alt="image" src="https://github.com/user-attachments/assets/bd77c8b4-d6f4-435f-b436-ebf8be4adfd2" />


Day 25: Anthropomorphic Palm Refinement & Interface Standardization
Objective: Refine palm chassis geometry for anatomical accuracy and standardize the mechanical interfaces for all digits.

- Result: In Progress.

- Progress:

    - Anatomical Refinement: Continued developing the primary palm chassis. Dedicated significant design time to correcting surface topologies to achieve a highly realistic, anthropomorphic shape. This complex organic modeling requires precise adjustments, extending the projected timeline for this specific component.

    - Interface Standardization: Redesigned the mechanical mounting points where the digits connect to the palm. Implemented uniform, standardized dimensions across all connection joints, replacing the previous mismatched iterations. This modular approach will heavily streamline future assembly and part replacement.

    - Design Validation: Focused on maintaining strict anatomical proportions throughout the dimensional updates. While the theoretical CAD viability is sound, physical functionality and kinematic performance remain to be validated during the upcoming physical prototyping phase.

  - Pending: Finalize the organic surface modeling of the palm chassis. Continue preparing the digital files for physical fit-testing once the 3D printer is procured.
 
<img width="1087" height="677" alt="Screenshot 2026-06-09 180514" src="https://github.com/user-attachments/assets/ca82ae19-f250-48c3-bd7e-f5953a0c7c39" />
<img width="1275" height="700" alt="Screenshot 2026-06-09 202529" src="https://github.com/user-attachments/assets/b057d240-2409-42e2-9063-9502e7a9658f" />
<img width="1090" height="635" alt="Screenshot 2026-06-09 203800" src="https://github.com/user-attachments/assets/6d04cb03-be18-4cea-8848-056dd64d4a97" />
<img width="741" height="621" alt="Screenshot 2026-06-09 205725" src="https://github.com/user-attachments/assets/245f20d6-f9be-4897-97f9-85169797bbd7" />
<img width="1690" height="872" alt="Screenshot 2026-06-09 205739" src="https://github.com/user-attachments/assets/3fbaaea2-f247-47e5-9888-4f497797dccc" />

Day 26: Spatial Iteration, Joint Clearances & Prototype Assembly
Objective: Optimize the spatial positioning for the digit-to-palm mounting interfaces, assemble a preliminary four-digit kinematic mock-up, and plan the overarching cosmetic housing.

- Result: Iterative Redesign Required / In Progress.

- Progress:

    - Spatial Iteration: Dedicated extensive CAD sessions to positioning the finger mounting interfaces on the palm chassis. Iterated through nearly 50 different spatial configurations to find the optimal biomechanical alignment.

    - Clearance Assessment: Concluded that the current spatial distribution is functionally flawed. The mounting connectors are positioned too closely together, which would result in mechanical interference between the digits during operation. This clearance issue necessitates a third major design iteration for the palm base.

    - Digital Mock-up: Successfully assembled a preliminary four-digit digital prototype within the CAD environment. Despite the current base spacing issues, the overarching visual and kinematic representation of the hand is highly promising and confirms the modular finger design.

    - Cosmetic Planning: Initiated conceptual planning for a final, unified exoskeletal housing (cosmetic shell). This outer layer will encapsulate all internal mechanics, PCBs, and wiring to provide a seamless, realistic anthropomorphic appearance.

- Pending: Execute the third CAD iteration of the palm chassis to widen the finger mounting baseline and resolve clearance issues. Continue evaluating design strategies for the final cosmetic outer shell.


<img width="1170" height="698" alt="Screenshot 2026-06-10 144422" src="https://github.com/user-attachments/assets/c76c7098-48c7-462d-8718-dc4f2cda7ca9" />
<img width="1230" height="745" alt="Screenshot 2026-06-10 145240" src="https://github.com/user-attachments/assets/a150a80b-796f-4814-9d9d-f56de9a2e396" />
<img width="1092" height="679" alt="Screenshot 2026-06-10 150403" src="https://github.com/user-attachments/assets/ae938347-3842-47a3-b841-20f99911f49d" />
<img width="940" height="694" alt="Screenshot 2026-06-10 151214" src="https://github.com/user-attachments/assets/442f0647-42d6-4ba1-a6dc-7db3061eaaef" />
<img width="1093" height="698" alt="Screenshot 2026-06-10 153256" src="https://github.com/user-attachments/assets/2d312b23-0a02-4329-9bdf-97f68cb37c32" />
<img width="1133" height="637" alt="Screenshot 2026-06-10 154316" src="https://github.com/user-attachments/assets/15c5459e-4920-4e9a-8693-70b46ed5994f" />
<img width="1577" height="808" alt="Screenshot 2026-06-10 155704" src="https://github.com/user-attachments/assets/bd72bf12-9f3c-4e49-8cfc-013f7a5fb17e" />
<img width="921" height="707" alt="Screenshot 2026-06-10 160210" src="https://github.com/user-attachments/assets/38af038a-fd86-4c71-953c-933b07573bac" />
<img width="1045" height="659" alt="Screenshot 2026-06-10 162031" src="https://github.com/user-attachments/assets/aae167bd-6606-4eac-8e98-bd0cd2dac1bd" />


Day 27: Assembly Sequencing, Digit Scaling & Parametric Constraints
Objective: Sequence the CAD workflow, design a non-interfering PCB housing, scale the fifth digit (pinky) for anatomical accuracy, and implement parametric constraints.

- Result: Strategic Pivot / In Progress.

- Progress:

    - Strategic Assembly Sequencing: Paused the redesign of the main palm chassis. Realized that attempting to finalize the complex palm topology is highly inefficient without first locking in the final dimensions of all individual fingers (a bottom-up design approach).

    - Legacy Data Integration: Accelerated the initial palm redesign phase by porting over the core dimensions from the previous iteration. Reusing this established measurement data allowed for a highly efficient rapid-drafting process, saving significant CAD modeling time before pausing the component for the bottom-up assembly.

    - Enclosure Clearance: Identified the need to design a highly compact PCB housing specifically engineered to prevent mechanical interference with adjacent fingers during movement.

    - Digit Scaling (Pinky): Initiated modeling for the proximal phalanx (base segment) of the fifth digit. To maintain modularity, the two distal components will remain identical to the standard finger design, while only the proximal segment is scaled down to achieve realistic anthropomorphic proportions.

    - Interference Resolution & Parametric Shift: Encountered a critical geometric error: accidentally modeled the finger joint connector and the palm receiver socket both exactly at 17mm, creating an unviable interference fit. To mitigate such errors and make future CAD updates far more efficient, I am transitioning to a parametric design strategy (utilizing fixed global variables/distances).

- Pending: Complete the CAD modeling for the pinky digit. Evaluate engineering an extended proximal segment for the middle finger to accurately reflect human proportions.




https://github.com/user-attachments/assets/3a072bb1-8ccc-41af-9362-5cba3cb2b5d4
<img width="1292" height="678" alt="image" src="https://github.com/user-attachments/assets/215a4eae-c294-48cf-9125-b3776bf7f3d4" />
<img width="863" height="510" alt="Screenshot 2026-06-11 151811" src="https://github.com/user-attachments/assets/dff9169c-ea12-4652-a733-14dcaadbf77c" />
<img width="756" height="553" alt="Screenshot 2026-06-11 151820" src="https://github.com/user-attachments/assets/05723464-c7ef-4bc5-a1cb-d455213c726b" />
<img width="974" height="677" alt="Screenshot 2026-06-11 172519" src="https://github.com/user-attachments/assets/48b3309f-47d9-4b42-acf6-0aca922f2a21" />
<img width="1313" height="535" alt="Screenshot 2026-06-11 175917" src="https://github.com/user-attachments/assets/d4648506-05c3-4d41-a604-6eb7c08e398b" />
<img width="1177" height="693" alt="Screenshot 2026-06-11 180554" src="https://github.com/user-attachments/assets/988ec37a-5401-41e4-be6a-cbc39d3ea1f5" />
<img width="1454" height="774" alt="Screenshot 2026-06-11 181913" src="https://github.com/user-attachments/assets/9299bc79-09c1-47f4-80b2-69f85cbc71cd" />


Day 28: Proximal Phalanx Completion, Digital Assembly & Control Architecture Selection
Objective: Finalize the CAD geometry for the middle and fifth digits, compile a full digital hand assembly, define the electronic control architecture, and pivot to software development.

- Result: Phase Transition / Tech Stack Locked.

- Progress:

    - Digit Scaling & Efficiency: Successfully completed the CAD modeling for the extended proximal phalanx (base segment) of the middle finger, as well as the scaled-down version for the fifth digit (pinky). The workflow was highly efficient, indicating a growing proficiency in CAD operations and parametric design.

    - Tolerance Visualization Constraint: Decided to temporarily pause the highly detailed enclosure and housing designs. As this is my first hardware project, accurately visualizing physical tolerances and micro-clearances purely on a screen is proving difficult without tactile reference models.

    - Hardware Procurement & Assembly: Scheduled the purchase of the Bambu Lab 3D printer for Monday. While awaiting delivery to validate physical clearances, my immediate mechanical goal is to mate all existing sub-assemblies into one complete digital mock-up of the hand.

    - Control Architecture Selection: Formulated a powerful master-slave (high-level/low-level) control topography. Selected the Teensy 4.1 running C++ as the low-level, real-time microcontroller due to its 600 MHz clock speed, making it ideal for processing high-frequency TLE5012B encoder data and controlling the Dyneema tendon servos. For high-level cognitive logic, planned an upgrade path to a Raspberry Pi or an Nvidia Jetson Orin, depending on final budget allocations.

    - Software Pivot & Vibe Coding Strategy: Transitioning the project's primary focus to software engineering. I intend to embrace a "vibe coding" workflow—focusing on high-level system architecture, logic loops, and prompt-driven development rather than getting bogged down in traditional syntax from scratch. For a complete beginner, this approach serves as an efficient catalyst to generate functional C++ code for the Teensy while strengthening foundational engineering concepts.

- Pending: Execute the full digital assembly of the hand in Autodesk Inventor. Finalize the 3D printer procurement. Set up the software development environment to begin the vibe coding phase.


<img width="1018" height="547" alt="Screenshot 2026-06-12 154001" src="https://github.com/user-attachments/assets/357bd97d-102c-46d9-a06c-1fa440fdd439" />
<img width="901" height="649" alt="Screenshot 2026-06-12 140826" src="https://github.com/user-attachments/assets/6428d0c2-db87-4070-936f-42458827e26d" />
<img width="1085" height="559" alt="Screenshot 2026-06-12 155826" src="https://github.com/user-attachments/assets/b6683f1a-6cce-4afb-9613-da1d0406a10c" />
<img width="1147" height="606" alt="Screenshot 2026-06-12 155958" src="https://github.com/user-attachments/assets/bbfce0c0-62cd-4cdd-9736-4aac2c26292c" />
<img width="1449" height="621" alt="Screenshot 2026-06-12 165654" src="https://github.com/user-attachments/assets/6cdf7155-3f37-4934-b4be-5b3243b73485" />
<img width="1452" height="637" alt="Screenshot 2026-06-12 162001" src="https://github.com/user-attachments/assets/e5c5b812-90e1-4628-9f1d-ac547ddc2029" />
<img width="1155" height="651" alt="Screenshot 2026-06-12 181149" src="https://github.com/user-attachments/assets/bcc6f8f2-4899-4fa2-ab2a-c759feb61ffd" />
<img width="896" height="557" alt="Screenshot 2026-06-12 181519" src="https://github.com/user-attachments/assets/2b1fe4c0-d45d-4f7b-a221-0079f19ebfd7" />
<img width="893" height="437" alt="Screenshot 2026-06-12 181529" src="https://github.com/user-attachments/assets/5e053437-4679-4e11-a721-4e03071c19fd" />
<img width="1353" height="863" alt="Screenshot 2026-06-12 192502" src="https://github.com/user-attachments/assets/a3598d9f-d256-4d40-a130-3d652ab67f70" />

Day 29: Component Sourcing, BOM Evaluation & Contingency Planning
Objective: Source physical hardware components, evaluate budget constraints, and perform minor digital model refinements.

- Result: In Progress / Sourcing Phase.

- Progress:

    - Component Sourcing & Budgeting: Dedicated today's session to researching and compiling the preliminary Bill of Materials (BOM). Encountered a potential financial bottleneck regarding the cumulative cost of the required hardware and electronics.

    - Sponsorship Strategy & Contingency: Currently evaluating funding pathways. If the Macondo Hack Club can provide financial sponsorship, I will proceed with procuring the premium, high-performance components. However, as a proactive contingency plan, I am also preparing a list of budget-friendly alternative components to ensure the project can still be completed out-of-pocket if necessary.

    - Time Management & CAD Refinement: Due to external scheduling constraints, development time was limited to a one-hour sprint today. Utilized this focused block to make minor, incremental adjustments and cleanups within the CAD environment.

- Pending: Finalize the official Bill of Materials (BOM) and submit a potential sponsorship request to the Macondo Hack Club. Solidify the budget-alternative component list.


<img width="1266" height="785" alt="Screenshot 2026-06-13 211334" src="https://github.com/user-attachments/assets/081818dc-2734-4e58-b1c7-89dc1806d615" />
<img width="1883" height="841" alt="Screenshot 2026-06-13 211851" src="https://github.com/user-attachments/assets/73617a50-447f-4eb1-90fe-ccc6aef26558" />
<img width="1919" height="599" alt="Screenshot 2026-06-13 211919" src="https://github.com/user-attachments/assets/890fafa3-287f-4b85-9078-454529525412" />
<img width="1475" height="538" alt="Screenshot 2026-06-13 211924" src="https://github.com/user-attachments/assets/39cacca1-8dc9-42dd-b298-998e9ac283b3" />
