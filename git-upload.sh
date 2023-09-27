#!/bin/bash
./history $1
git add .
git config --global user.name Kokadekeda
git config --global user.email kristaps.p.ansons@gmail.com
git commit -m "Class_$1$2"
git pull
git push origin main
