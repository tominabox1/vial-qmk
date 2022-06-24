# Look for a json keymap file
ifneq ("$(wildcard $(KEYMAP_USER_PATH_2)_keymap.json)","")
    KEYMAP_C := $(KEYBOARD_OUTPUT)/src/keymap.c
    KEYMAP_JSON := $(KEYMAP_USER_PATH_2)_keymap.json
    KEYMAP_PATH := $(MAIN_USER_KEYMAPS)
else ifneq ("$(wildcard $(KEYMAP_USER_PATH_1)/keymap.json)","")
    KEYMAP_C := $(KEYBOARD_OUTPUT)/src/keymap.c
    KEYMAP_JSON := $(KEYMAP_USER_PATH_1)/keymap.json
    KEYMAP_PATH := $(KEYMAP_USER_PATH_1)
else ifneq ("$(wildcard $(MAIN_KEYMAP_PATH_5)/keymap.json)","")
    KEYMAP_C := $(KEYBOARD_OUTPUT)/src/keymap.c
    KEYMAP_JSON := $(MAIN_KEYMAP_PATH_5)/keymap.json
    KEYMAP_PATH := $(MAIN_KEYMAP_PATH_5)
else ifneq ("$(wildcard $(MAIN_KEYMAP_PATH_4)/keymap.json)","")
    KEYMAP_JSON := $(MAIN_KEYMAP_PATH_4)/keymap.json
    KEYMAP_PATH := $(MAIN_KEYMAP_PATH_4)
else ifneq ("$(wildcard $(MAIN_KEYMAP_PATH_3)/keymap.json)","")
    KEYMAP_JSON := $(MAIN_KEYMAP_PATH_3)/keymap.json
    KEYMAP_PATH := $(MAIN_KEYMAP_PATH_3)
else ifneq ("$(wildcard $(MAIN_KEYMAP_PATH_2)/keymap.json)","")
    KEYMAP_JSON := $(MAIN_KEYMAP_PATH_2)/keymap.json
    KEYMAP_PATH := $(MAIN_KEYMAP_PATH_2)
else ifneq ("$(wildcard $(MAIN_KEYMAP_PATH_1)/keymap.json)","")
    KEYMAP_JSON := $(MAIN_KEYMAP_PATH_1)/keymap.json
    KEYMAP_PATH := $(MAIN_KEYMAP_PATH_1)
endif
