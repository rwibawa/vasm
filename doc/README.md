# vasm
A portable and retargetable assembler.
* [vasm](http://sun.hasenbraten.de/vasm)
* [Compilation Instructions](http://sun.hasenbraten.de/vasm/index.php?view=compile)
* [vasm docs](http://sun.hasenbraten.de/vasm/release/vasm.html)
* [example](https://www.youtube.com/watch?v=oO8_2JJV0B4&ab_channel=BenEater)

## 1. Setup with Visual Studio 2017
![Developer Command Prompt for VS2017](../img/Developer%20Command%20Prompt%20for%20VS2017.jpg)
```sh
E:\workspace_asm\vasm\>mkdir obj_win32
E:\workspace_asm\vasm\>nmake /f Makefile.Win32 CPU=6502 SYNTAX=oldstyle

$ ./vasm6502_oldstyle_win32.exe -Fbin blink.s
vasm 1.9 (c) in 2002-2022 Volker Barthelmann
vasm 6502 cpu backend 0.10 (c) 2002,2006,2008-2012,2014-2021 Frank Wille
vasm oldstyle syntax module 0.16 (c) 2002-2021 Frank Wille
vasm binary output module 2.1 (c) 2002-2021 Volker Barthelmann and Frank Wille

.text(acrx1):              5 bytes

$ ll *.out
-rw-r--r-- 1 LGS-NET+WRY 4096 5 Sep 13 00:41 a.out
```

## 2. Inspect with the hex editor:
1. _Right-click_ > Open With..
   ![Open With](../img/OpenWithHexEditor_01.jpg)
2. Select the _Hex Editor_
   ![Select _Hex Editor_](../img/OpenWithHexEditor_02.jpg)
3. The _Hex Editor_
   ![_Hex Editor_](../img/OpenWithHexEditor_03.jpg)