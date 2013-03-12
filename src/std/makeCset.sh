#!/bin/bash

awk  '{ss=$0;i1=index(ss,"(");s2=substr(ss,1,i1-1); i2=1; while ( index(substr(s2,i2)," ") !=0) {i2=i2+index(substr(s2,i2)," "); } ; fname=substr(s2,i2); sfname="fns/"fname".c"; print  $0"{\n}\n" > sfname; close(sfname); print $0";" > "mpi.h";}' c_fn.txt
