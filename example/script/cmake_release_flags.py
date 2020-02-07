#!/usr/bin/python

from __future__ import absolute_import
from __future__ import unicode_literals
from __future__ import print_function
from distutils import sysconfig
import sys

flags = [
    '-DCMAKE_BUILD_TYPE=Release',

    '-Wno-dev',

    '-DCMAKE_TESTING_ENABLED=ON',

    '-DCMAKE_MAKE_PROGRAM=make',
]

print(' '.join(flags), end='')
