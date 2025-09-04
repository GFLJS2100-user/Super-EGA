;******************************************************************************
;
; superega.inc - Register values for 800x600x16 Super EGA mode
;
;******************************************************************************

; Miscellaneous Output Register (3C2h)
SuperEGA_ModeData_Misc DB 0E7h

; Sequencer Registers (3C4h/3C5h)
SuperEGA_ModeData_SEQ DB 03h, 01h, 0Fh, 00h, 06h

; CRTC Registers (3D4h/3D5h)
SuperEGA_ModeData_CRTC DB 7Fh, 63h, 64h, 82h, 68h, 98h, 0Bh, 3Eh, 00h, 40h, EAh, 8Ch, DFh, 64h, 00h, E7h, 04h, E3h

; Graphics Controller Registers (3CEh/3CFh)
SuperEGA_ModeData_GC DB 00h, 00h, 00h, 00h, 00h, 40h, 05h, 0Fh, FFh

; Attribute Controller Registers (3C0h/3C1h)
SuperEGA_ModeData_AC DB 00h, 01h, 02h, 03h, 04h, 05h, 14h, 07h, 38h, 39h, 3Ah, 3Bh, 3Ch, 3Dh, 3Eh, 3Fh, 41h, 00h, 0Fh, 00h, 00h
