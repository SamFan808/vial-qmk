# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
# VIALRGB_ENABLE = yes		# Enable vial RGB
# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812
AUDIO_ENABLE = no           # Audio output
