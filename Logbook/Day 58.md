PCB issue fixing & Copilot dilemma

The last 3 days, including this day, were a bit boring and also frustrating.

Today I wanted to print the part from yesterday (A part from the palm, the thumb part), but I don't know how I should move on, because the print failed for the 3rd time. Maybe I should ask someone for help, but there is nobody.

The print always fails, and at the first layer of the part, there are always strings and never a clean surface. However, this day couldn't be more disappointing, so I wanted to clean up my Readme in GitHub and write it more organised. I wanted to use AI as help (Copilot, the integrated one in GitHub), but I will never trust Copilot again.

It broke my complete Readme, and I had no idea how I could revert it back. Because of this, I looked through the whole internet for help, but some videos on YouTube made it worse. But at the end, with a well guideline of Claude AI, I could figure it out and revert it with CodeSpace. First, I wrote "git revert HEAD --no-edit," and after confirming the code, I wrote "git push," and after that, everything was back to the old.

Then, I had so much to do that my brain couldn't process it all at once. My dad started to build a photovoltaic, and he wanted to build a self-made construction on the garden house deck, so I had to help him all at once, to have even more stress.

However, I tried to go anywhere. There were so many things to do that I lost track of things, which I have to correct.

I have only 1 month to build it, because Macondo will close the shipping and funding of my project.

After that, I found a problem. I designed the PCB in KICAD too big. The diameter was 14mm, but I adjusted it to 13 mm in CAD. So, I changed it to be smaller. First, I moved the TLE5012 chip a bit to the left to fit everything on the small board, but then I recognized that it doesn't work, because I have to fit it later exactly into the centre of the 3d print in real life for the exact position of the joint. So, I just put everything near together. At the end, I used DRC to check in KICAD, if everything is clean, so I downloaded the file.

At the end of the day, I assembled the robot hand completely for the second time, because somehow the old one was gone. I just connected the parts from my library together, like in the picture.

The next few days, I'll get caught up with the electronics of the hand and the bill, so I can ship my project for funding. Hopefully, it will work. Next week I'll go on vacation, so I won't have much time for building, and I'll maybe just organise the GitHub and post the files, which I have designed so far.
