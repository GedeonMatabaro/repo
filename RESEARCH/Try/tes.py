#!/usr/bin/env python3
import os
import subprocess
my_env=os.environ.copy()
my_env['PATH']=os.pathsep.join(['/home/gdm18/', my_env['PATH']])
result= subprocess.run(['createpy.py'], env=my_env)
