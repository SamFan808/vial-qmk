<<<<<<< HEAD
VIA_ENABLE = yes
LTO_ENABLE = yes
VIAL_ENABLE = yes
TAP_DANCE_ENABLE = no
=======
MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = 16000000

OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
OPT_DEFS += -DBOOTLOADER_SIZE=4096


NO_USB_STARTUP_CHECK = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes

AUTO_SHIFT_ENABLE = yes
COMBO_ENABLE = yes

NKRO_ENABLE = yes

RGBLIGHT_ENABLE = yes
CUSTOM_MATRIX = lite

MIDI_ENABLE = no
AUDIO_ENABLE = no
BLUETOOTH_ENABLE = no
SRC += matrix.c

EXTRAFLAGS+=-flto
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

VIA_ENABLE = yes
VIAL_ENABLE = yes

QMK_SETTINGS = yes
TAP_DANCE_ENABLE = no
KEY_OVERRIDE_ENABLE = no

>>>>>>> 105915582a4cfc15a9422f9633eccc656dd1cbb2
