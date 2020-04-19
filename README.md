# What is it?
T-Rex Auto Runner is an Arduino script for Google Chrome T-Rex Run game. Using micro servo and photoresistor it automaticly clicks spacebar at the right time, so basically it plays by its own **(for now, it only works on the white level)**.

Demonstartion video: https://i.imgur.com/FcxfcvR.mp4

# How does it work?
Photoresistor gets light level from the screen (white background) and if it gets a value below average (cactus) it sends a signal to micro servo to move propeller which clicks a spacebar, then Dino jumps.
