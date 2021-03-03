#! /bin/bash

run_zombie() {
	./zombie || ps -eaf --forest
}

run_zombie & ps -eaf --forest


