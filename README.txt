# smog-alert
smog alert detection 
//Patterns of Algorithms – multiple item selection *
//Smog alerts
The air pollution is measured in the city with a detector each day. Sometimes the detector
breaks, and it measures 0%, until it is repaired (it measures over 0% after it’s repaired). A
smog alert is issued when the measured value goes above 100%, and the smog alert lasts until
the value does not go below 100%.
Write a program that lists the days when a smog alert had to be issued.
-Input
The frst line of the standard input contains the count of days (1≤N≤100). The next
N lines contain the values measured by the detector (0P500).
-Output
The frst line of the standard output should contain the count of days, and the indexes
of the days (in increasing order, separated by a space) when a smog alert had to be issued.
-Example
Input       Output
9           2 5 8
20
00
60
110
120
80
110
0
-0Limits
Time limit: 0.1 second
Memory limit: 32 MB
Evaluation: In 40% of tests, the count of data is ≤20
Page
