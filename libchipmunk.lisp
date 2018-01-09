(in-package :cl-chipmunk)


(cffi:define-foreign-library (libchipmunk
                              :search-path (asdf:system-relative-pathname :cl-chipmunk "lib/"))
  (:darwin "libchipmunk.dylib.nocbv")
  (:unix "libchipmunk.so.nocbv")
  (:windows "libchipmunk.dll"))
