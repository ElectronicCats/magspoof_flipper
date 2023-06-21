# Magspoof Flipper by Electronic Cats
MagSpoof for the Flipper Zero by Electronic Cats. 

Basic TX of saved files confirmed working against an MSR90 with an external H-bridge module mirroring Samy Kamkar's design. 

## Hardware

This firmware is optimized to work with the [BackPack Magspoof by Electronic Cats](https://www.electroniccats.com) that has a driver and an external coil for optimal reproduction of the tracks, based on our past projects such as: Magspoof, Magspoof V3 and Magspoof V4.

## Optional Hardware

- RFID coil output weaker; able to be picked up/detected by more compact mag readers such as Square, but yet to have success with it being decoded/parsed properly. 
- Additional investigation into alternate internal TX options (CC1101, ST25R3916, piezo) underway; tentatively, RFID coil + speaker (`LF + P` config setting) results in the strongest internal TX tested to date but still weaker than a dedicated external module or an actual card swipe (and sounds like a dial-up modem from hell). Sample files with test data are included in `assets` for anyone wishing to experiment.

Disclaimer: use responsibly, and at your own risk. While in my testing, I've seen no reason to believe this could damage the RFID (or other) hardware, this is inherently driving the coil in ways it was not designed or intended for; I take no responsibility for fried/bricked Flippers. Similarly, please only use this with magstripe cards and mag readers you own — this is solely meant as a proof of concept for educational purposes. I neither condone nor am sympathetic to malicious uses of my code.

----
## Credits

This project interpolates work from [Samy Kamkar](https://github.com/samyk/)'s [original MagSpoof project](https://github.com/samyk/magspoof), 

[Alexey D. (dunaevai135)](https://github.com/dunaevai135/) & [Alexandr Yaroshevich](https://github.com/AYaro)'s [Flipper hackathon project](https://github.com/dunaevai135/flipperzero-firmware/tree/dev/applications/magspoof), and the [Flipper team](https://github.com/flipperdevices)'s [LF RFID](https://github.com/flipperdevices/flipperzero-firmware/tree/dev/applications/main/lfrfid) and [SubGhz](https://github.com/flipperdevices/flipperzero-firmware/tree/dev/applications/main/subghz) apps.  

Many thanks to everyone who has helped in addition to those above, most notably: 
- [ZacharyWeiss](https://github.com/zachary) 
- [arha](https://github.com/arha) for bitmapping work, skunkworks testing, and innumerable suggestions/ideas/feedback (now a collaborator!)
- [Zalán Kórósi (Z4urce)](https://github.com/Z4urce) for an earlier app icon
- [Salvatore Sanfilippo (antirez)](https://github.com/antirez) for bitmapping suggestions and general C wisdom
- [skotopes](https://github.com/skotopes) for RFID consultation
- [Tiernan (NVX)](https://github.com/nvx) + dlz for NFC consultation
- davethepirate for EE insight and acting as a sounding board
- [cool4uma](https://github.com/cool4uma) for their work on custom text_input scenes 
- Everyone else I've had the pleasure of chatting with!

## Maintainer

<a href="https://github.com/sponsors/ElectronicCats">
 <p align="center">
  <img src="https://electroniccats.com/wp-content/uploads/2020/07/Badge_GHS.png" height="104" />
 </p>
</a>

Electronic Cats invests time and resources providing this open source design, please support Electronic Cats and open-source hardware by purchasing products from Electronic Cats!