#!/bin/sh

ifconfig -a | grep -e ether | awk '{print $2}'
