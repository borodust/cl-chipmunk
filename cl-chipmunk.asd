(asdf:defsystem cl-chipmunk
  :description "Wrapper over chipmunk 2d physics library"
  :version "0.0.1"
  :author "Pavel Korolev"
  :mailto "dev@borodust.org"
  :license "MIT"
  :depends-on (alexandria cl-autowrap cl-plus-c)
  :serial t
  :components ((:file "packages")
               (:file "utils")
               (:file "libchipmunk")
               (:static-file "cl_chipmunk.h")
               (:file "autowrap")
               (:file "chipmunk")
               (:module spec)))
