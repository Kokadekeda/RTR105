#!/bin/bash
name=history_$(date + '$Y%m%d'_Class_$1.txt
echo $name
cat ~/.bash_history > $name
