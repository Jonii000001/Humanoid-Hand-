## TLE5012B sensor and PCB designing

Today was a really productive day. I made really big progress. Luckily, there was a problem, which saved me from buying the wrong PCB.

If I chose the old PCB with the AS5048A Chip, it wouldn't work, because the magnet has a too large magnetic field, in fact, 1.17-1.20 Tesla, and the chip could only support a quarter of that. Only if I place it 5mm away from the magnet, but that wouldn't work, because then the joint would have a width of ca. 30mm and that would be a bit too much.

This was the reason why I searched for almost an hour and found a cheaper 15-bit sensor (The TLE5012B sensor / 32.768 positions) instead of the old 14-bit sensor (16.384 positions). (The TLE5012B is designed for a higher magnetic field 20 mT to 100 mT)

Because of that discovery, I had to build a second PCB, and this took me a while. After that, I wanted to start designing a PCB for the transceiver for the magnetic encoder, because I can't connect 40 cables (from every magnetic encoder, because I want to place 2 encoders on 1 joint) or more with one microcontroller, so I wanted to design a PCB to connect all of them.

That was the end because it cost me a lot of physical energy. I have never built something as frustrating as this before, except the PCB for the AS5048A, and I think that was a bit more difficult. So, I decided to finish it later on and focus on the CAD part and integrating the PCB into the joint.

<img width="645" height="514" alt="image" src="https://github.com/user-attachments/assets/2a105181-62f4-48b0-a88a-f60b7e27d626" />
<img width="891" height="686" alt="image" src="https://github.com/user-attachments/assets/6d87e3b2-c69b-43e8-9765-82126aa1fe1c" />
<img width="1628" height="921" alt="image" src="https://github.com/user-attachments/assets/c5b419de-0dfa-4933-9e23-61bf2e175ead" />
<img width="710" height="521" alt="image" src="https://github.com/user-attachments/assets/34706ecf-964d-4994-b89a-952af0e2ae0b" />
<img width="949" height="719" alt="image" src="https://github.com/user-attachments/assets/238e78a5-9d67-45d6-8105-5735494ed30b" />
<img width="572" height="806" alt="image" src="https://github.com/user-attachments/assets/ed421759-f677-4581-88f9-1f0b10b8fa81" />
<img width="1164" height="718" alt="image" src="https://github.com/user-attachments/assets/0362051e-188e-4137-af50-b557c037942b" />
<img width="1770" height="953" alt="image" src="https://github.com/user-attachments/assets/5249249e-91c2-4f70-9b0f-f6ae5cdee121" />
