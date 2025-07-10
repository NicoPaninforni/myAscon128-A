#!/bin/bash

export PYENV_ROOT="$HOME/.pyenv"
export PATH="$PYENV_ROOT/bin:$PATH"

if command -v pyenv 1>/dev/null 2>&1; then
    eval "$(pyenv init --path)"
    eval "$(pyenv init -)"
    eval "$(pyenv virtualenv-init -)"
fi

pyenv activate cw305-env
code .


# Imposta LD_LIBRARY_PATH per picosdk
export LD_LIBRARY_PATH=/opt/picoscope/lib:$LD_LIBRARY_PATH

