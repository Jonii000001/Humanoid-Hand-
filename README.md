
<h1 style="font-size: 50px; color: #0076ff;">Humanoide Hand</h1>


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
| [Dynamixal Servomotor](https://en.robotis.com/shop_en/item.php?it_id=902-0135-000#sit_dvr) | Moves hand | 16 | $514.18 |
| [OpenRB-150](https://en.robotis.com/shop_en/item.php?it_id=902-0183-000) | Servomotor controller and signal transceiver | 1 | $24,94 |
| [Lipo Battery 11.1 V](https://www.amazon.de/-/en/OVONIC-Battery-Connection-Aircraft-Helicopter/dp/B0C3B47G2N/ref=sr_1_8?crid=2LYTQFP2EEQK3&dib=eyJ2IjoiMSJ9.nw2s57qqLqOaFVBvlCka9IhXU7DA95gM6agqVctoXY7b7RThVAMtqda12TTXvQKVUEploqYtWp4DUgfplciXl6LMWDjSwUTimg3OmONwYiE0K2NqLPehsVIN91DhbOTMNG-vC012v8HjNtXkmL47NlOtmQCR-tPEsrf5sWBQHlBT-kwVvOkkfRsJye66gETzd0K0zp2J7tgm7ouAHGhZCITCVx57T4pgZi5gefC-_4ATVbR4omS31nALu1pOMP0cpHhuKxJnX8V_xbQ5VIbY9wqg7kc2mi7Ow-pkATssX2o.5TM-OHYB9TXnq5HWWza8btVRPxmjxXjR_2KERJMD0fU&dib_tag=se&keywords=3S+Lipo+Battery+35C+2200+mAh+11.1+V&qid=1783972504&sprefix=3s+lipo+battery+35c+2200+mah+11.1+v%2Caps%2C148&sr=8-8) | Power the Servomotor | 1 | $26.51 |
| [Diamertically Magnet](https://www.magnet-shop.net/neodym-magnete/stabmagnete/stabmagnet-4.0-x-10.0-mm-n45-nickel-diametral-haelt-1.1-kg?klar_source=google&klar_cpid=19629153051&klar_adid=733632335184&gad_source=1&gad_campaignid=19629153051&gbraid=0AAAAAD-1I2bwd7UyxVgaSF3HH7-991-Gc&gclid=CjwKCAjwyOzSBhBTEiwAmxvJ-gqosx6Ed2dHn7_7eOlspQYhVeY38qSm3f2InlA8T037VH2726_T8RoC0msQAvD_BwE) | Magnetic encoder | 30 | $23.10 |
| [Dynemma Tendon](https://www.amazon.de/Dingbear-437-Generic-Braided-Fishing/dp/B07CVVQN37/ref=sxin_14_pa_sp_search_thematic_sspa?content-id=amzn1.sym.766d91f6-73c2-4f00-8b15-a614b1849edd%3Aamzn1.sym.766d91f6-73c2-4f00-8b15-a614b1849edd&cv_ct_cx=Dyneema%2BSchnur&keywords=Dyneema%2BSchnur&pd_rd_i=B07CVTTYBR&pd_rd_r=4f2f39b2-22d8-47e7-bf1b-9510af415d10&pd_rd_w=VCqY5&pd_rd_wg=Z5ebr&pf_rd_p=766d91f6-73c2-4f00-8b15-a614b1849edd&pf_rd_r=DRAZ8JZ4QQQVQ9Y2JKDX&qid=1781541035&s=sports&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sr=1-1-0bff13d2-7188-4a82-bb3a-ccd1e70f0167-spons&aref=QROwltFPIm&sp_csd=d2lkZ2V0TmFtZT1zcF9zZWFyY2hfdGhlbWF0aWM&th=1&psc=1) | Move the hand | 1 | $10.36 |
| [Ceramic ball bearing 1](https://www.ebay.at/itm/407026719115?var=677216858335) | Smooth joint movement | 5 | $37.17 |
| [Ceramic ball bearing 2](https://www.ebay.at/itm/358293695031?var=626577657096) | Smooth joint movement | 23 | $182.15 |
| [Teensy 4.1](https://www.amazon.de/-/en/PJRC-Teensy-With-Pins-Soldered/dp/B08CTM3279/ref=sr_1_1?crid=1ZX5R2QFAPHGG&dib=eyJ2IjoiMSJ9.73YAbp3wwEJKFXMEClrPk1XXfObPSKHulkErnEHfmcHnMpEfxqxYqTlxRe3dv-a6y9oBpAO3nFt8q_XMAJ3DVzIuNkFFpeohAUSXvdm--NUbfVeX3HIcWHmSie_qJGLECwadoCAI_pxwEI7DS-o9ehRn6Y39YA-jK77rsASh9SPdst9kfhqWksoz6oAXTKacete_jnoh4VNIObOQxUROrxHCJFyTbOBEujw67zcHXiQqFmwIt5uw9Pl4uxmOCifG3FLbStXdC2pJtT78m5ZucvjKw3fg2qGsm28sOlTYsO4.PWp6stcMaetyrIMh4LyMzXZlvadNRumBnpowNjj4SfM&dib_tag=se&keywords=teensy+4.1&qid=1780600704&s=ce-de&sprefix=teensy+4.1%2Celectronics%2C120&sr=1-1) | Controls the hand | 1 | $51.85 |
| PCB | Magnetic encoder | 35 | $13.80 | |
| [100Ω SMD Resistor](https://www.lcsc.com/product-detail/C144808.html?spm=wm.gwc.xh.4.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.38 |
| [1kΩ SMD Resistor](https://www.lcsc.com/product-detail/C106235.html?spm=wm.gwc.xh.2.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.62 |
| [10kΩ SMD Resistor](https://www.lcsc.com/product-detail/C60490.html?spm=wm.gwc.xh.3.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.59 |
| [Ceramic SMD Capacitor 100nF](https://www.lcsc.com/product-detail/C14663.html?spm=wm.gwc.dh.1.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | PCB | 100 | $0.88 |
| [TLE5012B-Chip](https://www.lcsc.com/product-detail/C123083.html?spm=wm.gwc.xh.0.cbm___wm.sxq.ssl.gwc&lcsc_vid=FFcNUAJSEwNZX10CE1JWBlIAE1hdV1QAQAJWUVNeFQcxVlNeQ1JXUldXTlJeVTsOAxUeFF5JWBYZEEoKFBINSQcJGk4eFQsCAgIaSgADAwAHC0slQVFaXlRIHxUDCw%3D%3D) | Read magnet axis | 31 | $89.44 |
| [RP2040-Zero](https://de.aliexpress.com/item/1005010530069817.html?spm=a2g0o.productlist.main.13.794dl0e4l0e4nG&algo_pvid=fbacfa47-203a-45f1-953c-313e447ff765&algo_exp_id=fbacfa47-203a-45f1-953c-313e447ff765-12&pdp_ext_f=%7B%22order%22%3A%225875%22%2C%22eval%22%3A%221%22%2C%22orig_sl_item_id%22%3A%221005010530069817%22%2C%22orig_item_id%22%3A%221005010313694762%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%216.26%213.13%21%21%2147.28%2123.64%21%402103877917840243854055069e0e47%2112000052713684938%21sea%21AT%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Adc27ac49%3Bm03_new_user%3A-29895&curPageLogUid=5XlZvE56spEe&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010530069817%7C_p_origin_prod%3A1005010313694762) | Magnet encoder signal transceiver | 6 | $23.63 |

## Total Build Cost: $999.60
