Priority Scheduler in xv6
-----------------------

Replaced xv6’s current round-robin scheduler with a priority-based scheduler.
For example, a process with a priority of 0 has the highest priority, while a process with a priority of 200 has the lowest priority. 
The default priority for a process is 50. A priority-based scheduler always selects the process with the highest priority for execution.
If there are multiple processes with the same highest priority, the scheduler uses round-robin to execute them in turn.
