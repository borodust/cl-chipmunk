(in-package :cl-chipmunk)


(defun %make-autowrap-prefix-cutter (prefix-length)
  (lambda (name matches regex)
    (declare (ignore matches regex))
    (subseq name prefix-length)))
