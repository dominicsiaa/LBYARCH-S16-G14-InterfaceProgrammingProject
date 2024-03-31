x86-to-C Interface Programming Project
LBYARCH S16, Group 14
- Montenegro, Jaycee
- Sia, Dominic

Our problem involves

Results:
- Program output with correctness check can be found in DebugModeOutput.jpg and ReleaseModeOutput.png
- Execution time measurements were done on a vector with the same values, these were run 30 times and the average was taken

DEBUG MODE:
* 2^20
  * C:          0.002233 s
  * Assembly:   0.001600 s
* 2^24
  * C:          0.036733 s
  * Assembly:   0.026133 s
* 2^28
  * C:          0.583333 s
  * Assembly:   0.407067 s

RELEASE MODE:
* 2^20
  * C:          0.001033 s
  * Assembly:   0.001633 s
* 2^24
  * C:          0.016500 s
  * Assembly:   0.025467 s
* 2^28
  * C:          0.268933 s
  * Assembly:   0.388933 s

Analysis:

Our comparative analysis between Assembly and C programming languages, particularly in Debug mode, indicates that Assembly leads to a significant reduction in execution time, demonstrating improvements of 28.39%, 28.86%, and 30.22% for data sizes of 2^20, 2^24, and 2^28, respectively. This performance enhancement is attributed to Assembly's lower-level nature and reduced overhead. In contrast, C's performance in Debug mode is slightly slower due to its higher-level abstraction and more overhead. 

In release mode, 

Despite this, both languages exhibit impressive speeds when compared to other programming options, underscoring the value of learning lower-level languages for its efficiency benefits.
