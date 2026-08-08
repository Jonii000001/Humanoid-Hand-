
<h1 style="font-size: 100px; color: #0076ff;">Humanoide Hand</h1>


<img width="796" height="586" alt="image" src="https://github.com/user-attachments/assets/1e6f201c-c6e1-48d6-b2ff-559fab370a7f" />


## About
The humanoid hand is a self designed roboter hand inspired by famous hands like the Wuji hand and Orca hand, which can be controlled from your computer. It can be used for grasping items like a bottle, so I could hold my bottle during my study session and alert me for drinking.


## Why did I make this project?
This summer, I wanted to build my first project, because next year I'll go to a higher technical school, and I thought it would be a great practice to start during my summer holidays. First, I wasn't sure which project I should build. My first ideas were a self-balancing robot, car, and drone, and in the end, I decided to create a humanoid hand because I liked the complex mechanism behind it.
The main key is that I want to prove to everyone that I can achieve this. My father didn't believe in me, so this was the main reason why I used a humanoid hand instead of the other projects. 
My dream is also to go to MIT, hopefully I will get there ;)

## Build Status
- [x]  Bill of Materials Complete
- [ ]  CAD Design Complete
- [x]  CAD Assembeled
- [x]  Shipping for Funding
- [ ]  Parts Ordered
- [ ]  Parts Received
- [ ]  Assembly Complete
- [ ]  Electronics Wired
- [ ]  PCB Soldered
- [ ]  First Motion Test



## BOM

| Component | Purpoes | Qty | Cost(USD) | 
| :--- | :--- | :--- | :--- |
| [Dynamixal Servomotor](https://en.robotis.com/shop_en/item.php?it_id=902-0135-000#sit_dvr) | Moves hand | 17 | $541.26 (including shipping) |
| [OpenRB-150](https://en.robotis.com/shop_en/item.php?it_id=902-0183-000) | Servomotor controller and signal transceiver | 1 | $24.98 |
| [3P JST Expansion Board](https://en.robotis.com/shop_en/item.php?it_id=903-0306-000) | OpenRB-150 Expension, to connect all Servos | 3 | $17.70 |
| [Robot Cable-3P 180mm 10pcs](https://en.robotis.com/shop_en/item.php?it_id=903-0077-000) | To connect the Servos together | 3 | $50.10 |
| [Robotis Power Set](https://en.robotis.com/shop_en/item.php?it_id=902-0161-200) | Power the Servomotors | 1 | $59.70 |
| [Diamertically Magnet](https://www.magnet-shop.net/neodym-magnete/scheibenmagnete/scheibenmagnet-4.0-x-4.0-mm-n35h-nickel-120-diametral) | Magnetic encoder | 20 | $19.74 |
| [Dynemma Tendon](https://www.amazon.de/Dingbear-437-Generic-Braided-Fishing/dp/B07CVVQN37/ref=sxin_14_pa_sp_search_thematic_sspa?content-id=amzn1.sym.766d91f6-73c2-4f00-8b15-a614b1849edd%3Aamzn1.sym.766d91f6-73c2-4f00-8b15-a614b1849edd&cv_ct_cx=Dyneema%2BSchnur&keywords=Dyneema%2BSchnur&pd_rd_i=B07CVTTYBR&pd_rd_r=4f2f39b2-22d8-47e7-bf1b-9510af415d10&pd_rd_w=VCqY5&pd_rd_wg=Z5ebr&pf_rd_p=766d91f6-73c2-4f00-8b15-a614b1849edd&pf_rd_r=DRAZ8JZ4QQQVQ9Y2JKDX&qid=1781541035&s=sports&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sr=1-1-0bff13d2-7188-4a82-bb3a-ccd1e70f0167-spons&aref=QROwltFPIm&sp_csd=d2lkZ2V0TmFtZT1zcF9zZWFyY2hfdGhlbWF0aWM&th=1&psc=1) | Move the hand | 1 | $10.39 |
| [Ceramic ball bearing 2](https://www.ebay.at/itm/358293695031?var=626577657096) | Smooth joint movement | 14 | $121,50 |
| [Teensy 4.1](https://www.amazon.de/-/en/PJRC-Teensy-With-Pins-Soldered/dp/B08CTM3279/ref=sr_1_1?crid=1ZX5R2QFAPHGG&dib=eyJ2IjoiMSJ9.73YAbp3wwEJKFXMEClrPk1XXfObPSKHulkErnEHfmcHnMpEfxqxYqTlxRe3dv-a6y9oBpAO3nFt8q_XMAJ3DVzIuNkFFpeohAUSXvdm--NUbfVeX3HIcWHmSie_qJGLECwadoCAI_pxwEI7DS-o9ehRn6Y39YA-jK77rsASh9SPdst9kfhqWksoz6oAXTKacete_jnoh4VNIObOQxUROrxHCJFyTbOBEujw67zcHXiQqFmwIt5uw9Pl4uxmOCifG3FLbStXdC2pJtT78m5ZucvjKw3fg2qGsm28sOlTYsO4.PWp6stcMaetyrIMh4LyMzXZlvadNRumBnpowNjj4SfM&dib_tag=se&keywords=teensy+4.1&qid=1780600704&s=ce-de&sprefix=teensy+4.1%2Celectronics%2C120&sr=1-1) | Controls the hand | 1 | $51.96 |
| [PCB](https://cart.jlcpcb.com/quote?spm=jlcpcb.Public.2006&spm=Jlcpcb.Instantquote.1005&_t=1786008536577&up_spm=Jlcpcb.Loginpage.1003) | Magnetic encoder | 15 | $11.97 |
| [100Ω SMD Resistor](https://www.lcsc.com/product-detail/C144808.html?spm=wm.gwc.xh.4.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.38 |
| [1kΩ SMD Resistor](https://www.lcsc.com/product-detail/C106235.html?spm=wm.gwc.xh.2.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.48 |
| [10kΩ SMD Resistor](https://www.lcsc.com/product-detail/C60490.html?spm=wm.gwc.xh.3.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.46 |
| [Ceramic SMD Capacitor 100nF](https://www.lcsc.com/product-detail/C14663.html?spm=wm.gwc.dh.1.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.73 |
| [TLE5012B-Chip](https://www.lcsc.com/product-detail/C123083.html?spm=wm.gwc.xh.0.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | Read magnet axis | 14 | $57.69 |
| [RP2040-Zero](https://www.amazon.de/RP2040-Zero-Development-Microcontroller-Multifunctional-Integration/dp/B09SBCKYSC?ref_=ast_sto_dp) | Magnet encoder signal transceiver | 1 | $12.24 |
| [Quartzman FSR-400sB](https://www.amazon.de/-/en/Quartzman-FSR-400sB-Thin-Pressure-Sensor/dp/B0DS8D6BMF/ref=sr_1_4?crid=10KDYF8JBHBJR&dib=eyJ2IjoiMSJ9.2uoruLBmw-k2J6Er5Bfl7gSxQzy5jOl5P1L_h9vv_5JGSBnP-KB3EYmH1iEbA5grjJcCetATrbLUQfSxf3VWmPUKkV9OQHvzlbv1Cn5f1zBx8h2YtyLqD_6iOgiMoHr-txAmCrdWElfUz47heNyRORWtnFShRfIoln8tvKfzoolVEY_VDh0nkh7JTc1K8wUexu5lxJIZzVBxstIr8IUL-e7L1GL1Yq1km65gDy6WdFJJYk7zLPO18z0uV8dc5hEVqGyfTf1NEVURpI287PmeDocdNuu84ZNJyS478_mF_mQ.OJOH0_4GYyzUZT2EIED5edErHfAo5QGcNXsQLwdR9Ws&dib_tag=se&keywords=fsr+sensor+short&qid=1786220330&sprefix=fsr+sensor+shor%2Caps%2C133&sr=8-4) | To read the pressure from the fingertips | 2 | $16.16 |
## Total Build Cost: $997.52 (including shipping)


## PCB
<img width="873" height="703" alt="Screenshot 2026-07-12 165819" src="https://github.com/user-attachments/assets/cebb5e0d-901c-4772-851d-b6f3d4869c34" />

## Schematic 
<img width="1080" height="691" alt="Screenshot 2026-07-18 192702" src="https://github.com/user-attachments/assets/a28092b3-8b6e-4032-8cac-87112c839c4d" />

### Software Roadmap
- [ ] Write base firmware for Teensy 4.1 / Raspberry Pi
- [ ] Calibrate TLE5012B magnetic encoders
- [ ] Implement kinematics calculation for robotic servo motors
- [ ] Set up communication protocol between Pi and Teensy
