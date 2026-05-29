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


Day 17: Industrial Design & Dimensional Constraint Synthesis
Objective: Synthesize organic aesthetic form with high-precision parametric constraints for the intermediate phalanx assembly.

Result: In Progress.

Progress: Encountered a design bottleneck regarding the dual optimization of component aesthetics and dimensional accuracy. Iterated on the intermediate phalanx geometry to balance a natural, visually cohesive humanoid profile with the strict, sub-millimeter clearances required for joint interoperability. Successfully translated spatial boundaries into precise CAD sketches, ensuring that the visual shell does not compromise the structural integrity or mechanical mating features of the digit.

Pending: Finalize the internal geometric features of the intermediate segment to anchor the joint mechanisms, ensuring the updated aesthetic profile accommodates the internal routing paths.


<img width="548" height="548" alt="Screenshot 2026-05-29 144418" src="https://github.com/user-attachments/assets/77230e6b-ac6b-4862-98cb-71470bbe925c" />
<img width="1371" height="308" alt="Screenshot 2026-05-29 171331" src="https://github.com/user-attachments/assets/d0cc99d8-964b-4361-acdb-dd7d90073822" />
<img width="1418" height="761" alt="Screenshot 2026-05-29 212053" src="https://github.com/user-attachments/assets/7c432c32-0a85-46ac-a85c-d831d1d8bdad" />
<img width="1418" height="761" alt="Screenshot 2026-05-29 212053" src="https://github.com/user-attachments/assets/306541f5-e7dd-4c5b-b05c-f0a0adba0558" />


