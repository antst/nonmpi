#!/bin/bash

awk  '{ss=$0;i1=index(ss,"(");
	i11=index(ss,")");
	i11=i11-i1;
	s2=substr(ss,1,i1-1); 
	pdef0=substr(ss,i1,i11);
	pdef=pdef0")";
	tmp=substr(pdef,2,length(pdef)-2)",";
	plist="(";
	Carg="";
	Farg="";
	strs="******";
	i2=1;
	while (index(substr(tmp,i2),",")!=0){
	    i21=index(substr(tmp,i2)," ");
	    i22=index(substr(tmp,i2+i21),",");
	    aname=substr(tmp,i2+i21,i22);
	    type1=substr(tmp,i2,i21);
	    i2=i21+i22+i2+1;
	    iq=0;
	    while(index(substr(aname,iq+1),"*")!=0) {iq=iq+1};
	    plist=plist" "substr(aname,iq+1);
	    Carg=Carg""substr(strs,1,iq)"c_"substr(aname,iq+1)
	    Farg=Farg""type1"*"aname;
	    }
	plist=plist"ierr)";
	Farg="("Farg" FTN_INT *ierr)";
	Carg=substr(Carg,1,length(Carg)-1);
	print pdef;
	print Farg;
	print Carg;
	print "";
	i2=1; 
	while ( index(substr(s2,i2)," ") !=0) 
	    {i2=i2+index(substr(s2,i2)," "); } ; 
	fname=substr(s2,i2); 
	fnamL=tolower(fname);
	fnamU=toupper(fname);
	sfname="fns/"fname".c"; 
	print  "#include \"mpi.h\"\n\#include \"nompi.h\"\n#include \"nompi_fortran.h\"\n\n\n/*C Bindings*/\n"$0"{\n\n}\n\n/* Fortran Bindings */\nNOMPI_FORTRAN(void,"fnamU","fnamL","Farg","plist"){\n\n /* *ierr="fname"("Carg");/*\n\n}\n" > sfname; 
	close(sfname); 
	print $0";" > "mpi.h";}' c_fn.txt
