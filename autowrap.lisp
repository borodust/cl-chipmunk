(autowrap:c-include '(cl-chipmunk "cl_chipmunk.h")
    :spec-path '(cl-chipmunk :spec)
    :definition-package :%chipmunk
    :sysincludes `("/usr/include/x86_64-pc-linux-gnu/"
                   ,(namestring (asdf:system-relative-pathname :cl-chipmunk "lib/chipmunk/include/")))
    :include-sources ("cl_chipmunk.h")
    :include-definitions ("(cp|cp_)\\w*")
    :exclude-sources ("chipmunk_private\\.h$"
                      "math.*\\.h"
                      "stdlib\\.h")
    :no-accessors t
    :symbol-regex (("^cp_\\w+$" nil (cp::%make-autowrap-prefix-cutter 3))
                   ("^cp\\w+$" nil (cp::%make-autowrap-prefix-cutter 2))))
