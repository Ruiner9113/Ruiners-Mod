#!/usr/bin/env bash

STEAM_RUNTIME="$HOME/.local/share/Steam/ubuntu12_32/steam-runtime/run.sh"

MOD_DIR="$(cd "$(dirname "$0")" && pwd)"

cd "$MOD_DIR"

"$STEAM_RUNTIME" ./mod_hl2mp_linux64
