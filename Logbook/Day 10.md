## Magnetic encoder (AS5600) researching

Today I researched and thought a lot about the precision angle reading. My goal was, at the end of the day, to find a mechanism for the tracking of the joint angle.

After long research, I found a magnetic encoder, that could work at the joint. Maybe it'll be difficult to integrate it and not make the joint big, but everything is possible. I took the AS5600 into view because it runs with I2C and is a high-precision magnetic encoder, which provides a non-contact mechanism.

Furthermore, I also ordered today MR84ZZ ball bearing (the ZZ means the bearing is out of metal), so I can prototype my hand, and it also minimizes the rotational friction at the joints.

I'm currently designing a mounting mechanism for the diametrical magnet and also the AS5600 chip. I have to place the magnet centrally into the center of the part, so it can accurately read the angle axis at the joint and maintains incorrect movement.

For the people who don’t know why I have to use a diametrical (it’s really hard to find a provider for small ones) magnet and not just a normal one. The normal magnet is polarised on the front and the back, but the AS5600 chip can only read one side, so I have to use a diametrical magnet, where the north and south poles are side by side.

<img width="699" height="831" alt="image" src="https://github.com/user-attachments/assets/50453313-3f90-42cb-981d-2e1e3f294cee" />
