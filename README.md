# Lab_05_26K-0662
This repository contains Lab 05 Tasks

## Lab 05 – Nested Decision Structures (Programming Fundamentals)

This repository contains solutions to Lab 05, which focuses on nested `if-else` statements, `switch` statements, and bitwise operators in C. Each program models a real-world decision system where later checks only run if earlier ones pass (or fail), reinforcing step-by-step conditional logic.

### Topics Covered

- Nested `if-else` chains with ordered priority checks
- `switch` statements (including nested switches for two-level menus)
- Bitwise operators (`&`, `!`) for flag/permission checking
- Combining arithmetic, relational, logical, and bitwise conditions
- `sizeof()` and basic type sizing

### Questions

| # | Title | Status | Key Concepts |
| 1 | Smart Parking Lot Fee Calculator | ⬜ Not yet added | Nested if-else, vehicle-type branching |
| 2 | University Scholarship Eligibility | ⬜ Not yet added | Sequential gate checks (stop-on-fail) |
| 3 | AI Triage Priority System | ✅ Complete | Ordered `else if` chain, critical-first logic |
| 4 | ATM Withdrawal & Cash Dispensing | ✅ Complete | Step-by-step validation, note breakdown (largest-first) |
| 5 | Smart Home Hub Mode Selector | ⬜ Not yet added | Nested if-else, room-based sub-menus |
| 6 | Chatbot Message Router | ✅ Complete | Nested `switch` statements |
| 7 | Course Advisor Recommendation | ✅ Complete | Nested `switch` statements |
| 8 | Basic File Permission Checker | ✅ Complete | Bitwise flags (READ/WRITE/EXECUTE) |
| 9 | Extended File System Permissions | ✅ Complete | Bitwise flags with 5 permission levels |
| 10 | AI Model Deployment Decision | ✅ Complete | Arithmetic + relational + logical + bitwise combined |


### Repository Structure

Lab-05-Nested-Decision-Structures/
├── README.md
├── Q1_parking_fee.c
├── Q2_scholarship.c
├── Q3_triage_priority.c
├── Q4_atm_withdrawal.c
├── Q5_smart_home.c
├── Q6_chatbot_router.c
├── Q7_course_advisor.c
├── Q8_file_permissions.c
├── Q9_extended_permissions.c
└── Q10_model_deployment.c

### Notes

- All programs use `scanf` for input and validate inputs where the task specifies (e.g., "Invalid choice", "Invalid selection").
- Bitwise-flag questions (8, 9, 10) use `&` to test individual bits and `!` to test for an unset bit — not `&&`/`||`, which operate on whole true/false values rather than individual bits.
- Question 10 uses `%zu` when printing `sizeof()` results, since `sizeof` returns an unsigned `size_t` type.

### Author

Name: Mohammad Ahmed     Roll No: 26K-0662     Section: BCS-1D
