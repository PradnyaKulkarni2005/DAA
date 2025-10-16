#  DESIGN & ANALYSIS OF ALGORITHMS LABORATORY PROGRAM  
### **B. Tech. – Information Technology | Semester: V**  
### **Course:** Design & Analysis of Algorithms Laboratory  

---

## **PRACTICAL PROBLEMS**

---

### **1. Customer Order Sorting System**

**Objective:**  
Design and implement a sorting algorithm using **Merge Sort** to efficiently arrange customer orders based on their timestamps.

**Problem Statement:**  
Develop a solution that handles large datasets (up to **1 million orders**) with minimal computational overhead. The implementation should efficiently sort customer orders by their timestamps using the **Merge Sort algorithm**.

**Requirements:**  
- Implement **Merge Sort** algorithm for timestamp-based sorting.  
- Handle datasets with up to **1 million orders**.  
- Minimize computational overhead.  
- Analyze time complexity.  
- Compare performance with traditional sorting techniques.  

**Expected Analysis:**  
- Time complexity analysis of Merge Sort.  
- Comparison with other sorting algorithms (Quick Sort, Bubble Sort, etc.).  
- Performance evaluation on large datasets.  

---

### **2. Movie Recommendation System Optimization**

**Scenario:** *StreamFlix OTT Platform*  

**Role:** Backend Engineer  

**Objective:**  
Optimize movie sorting performance using **Quick Sort** for personalized recommendations based on various user preferences.

**Requirements:**  
- Implement **Quick Sort** to efficiently sort movies based on multiple criteria:  
  - IMDB Rating  
  - Release Year  
  - Watch Time Popularity  
- Handle large datasets containing **millions of movies** while maintaining fast response times.  
- Support multiple sorting criteria.  
- Ensure scalability and optimal performance during peak hours.  

**Objectives:**  
- Optimize system performance during peak hours.  
- Ensure scalability for large movie datasets.  
- Maintain fast response times for user requests.  

---

### **3. Emergency Relief Supply Distribution**

**Scenario:** *Flood Relief Operation*  

**Role:** Logistics Manager  

**Problem Details:**  
A rescue team has a limited-capacity boat that can carry a maximum weight of **W kilograms**. The boat must transport critical supplies (food, medicine, drinking water) from a relief center to affected villages. Each relief item has:  
- **Weight (wi)** – in kilograms  
- **Utility Value (vi)** – indicating importance (medicine > food)  
- **Divisibility:** Some items can be divided (food, water), others cannot (medical kits).  

**Requirements:**  
- Implement the **Fractional Knapsack Algorithm** to maximize total utility value.  
- Prioritize high-value items while considering weight constraints.  
- Allow partial selection of divisible items (e.g., fraction of food packets).  
- Ensure optimal supply distribution given weight limit **W**.  

**Expected Outcome:**  
Maximize the utility value of supplies transported while respecting the boat’s weight capacity.

---

### **4. Smart Traffic Management for Emergency Vehicles**

**Scenario:** *Intelligent Traffic System for Ambulances*  

**Role:** Transportation Engineer  

**System Model:**  
- **Nodes:** Intersections (junctions).  
- **Edges:** Roads with weights representing travel time (considering traffic congestion).  
- **Dynamic:** Weights change in real-time based on traffic conditions.  

**Requirements:**  
- Implement **Dijkstra’s Algorithm** to find the shortest path from ambulance location (S) to all possible hospitals.  
- Account for **dynamic weight updates** as traffic conditions change.  
- Optimize for **large cities** with thousands of intersections and roads.  
- Provide **visual representation** of the optimal path for navigation.  

**Expected Outcome:**  
The system should suggest the quickest route for ambulances, updating dynamically based on real-time traffic conditions to ensure minimal emergency response time.

---

### **5. Multi-Stage Delivery Route Optimization**

**Scenario:** *SwiftCargo Logistics Company*  

**Role:** Logistics Optimization Engineer  

**Network Model:**  
- **Structure:** Directed, weighted multistage graph.  
- **Stages:** N predefined stages (Warehouses → Transit Hubs → Delivery Points).  
- **Constraint:** Every package must pass through at least one node in each stage.  

**Requirements:**  
- Model transportation network as a **directed, weighted multistage graph**.  
- Implement an efficient algorithm (**Dynamic Programming** or **Dijkstra’s Algorithm**) for optimal delivery routes.  
- Scale for large datasets (thousands of cities and routes).  
- Analyze and optimize route selection based on real-time constraints:  
  - Traffic conditions  
  - Weather delays  
  - Fuel efficiency  
- Handle real-time changes (road closures, rerouting).  
- Support batch processing for multiple delivery requests.  

**Expected Outcome:**  
Cost-efficient and time-optimized delivery routes that adapt to real-time conditions and scale for large logistics networks.

---

### **6. Disaster Relief Resource Allocation**

**Scenario:** *Earthquake Relief Operation*  

**Role:** Logistics Coordinator  

**Problem Details:**  
A relief organization must transport essential supplies using a limited-capacity truck that can carry a maximum weight of **W kg**. There are **N types of items**, each with:  
- **Weight (wi)** – in kilograms.  
- **Utility Value (vi)** – representing importance in saving lives.  
- **Indivisibility:** Each item must be either completely included or excluded.  

**Requirements:**  
- Model this problem using the **0/1 Knapsack Algorithm**, where each item can either be included (1) or excluded (0).  
- Implement **Dynamic Programming** to find the optimal set of items maximizing utility while staying within the weight constraint.  
- Analyze performance of different approaches (**Brute Force**, **Dynamic Programming**, **Greedy Algorithms**).  
- Optimize for real-world constraints (perishable items have higher priority).  
- Extend model to handle **multiple trucks** or **real-time decision-making** for dynamic supply chain management.  

**Expected Outcome:**  
Maximize the total utility value of supplies transported while ensuring the total weight does not exceed the truck’s limit, with priority given to critical items.

---

### **7. University Timetable Scheduling**

**Scenario:** *University Exam Scheduling System*  

**Role:** Scheduling System Developer  

**Problem Model:**  
The problem is modeled as a **Graph Coloring Problem**, where:  
- **Vertices:** Each course is represented as a vertex.  
- **Edges:** An edge exists between two vertices if a student is enrolled in both courses.  
- **Colors:** Each vertex (course) must be assigned a color (exam slot) such that no two adjacent vertices share the same color.  

**Requirements:**  
- Model the problem as a graph and implement a **Graph Coloring Algorithm** (Greedy Coloring or DSATUR).  
- Minimize the number of colors (exam slots) while ensuring conflict-free scheduling.  
- Handle large datasets with thousands of courses and students.  
- Compare the efficiency of **Greedy Coloring**, **DSATUR**, and **Welsh-Powell** algorithms.  
- Extend the solution to include **room allocation constraints**, ensuring exams in the same slot fit within available classrooms.  

**Expected Outcome:**  
An optimized exam schedule that minimizes the number of time slots required while ensuring no student has conflicting exams.

---

## **Summary Table**

| **Problem No.** | **Title** | **Algorithm Used** | **Approach Type** | **Expected Time Complexity** |
|------------------|------------|--------------------|------------------|------------------------------|
| 1 | Customer Order Sorting System | Merge Sort | Divide & Conquer | O(n log n) |
| 2 | Movie Recommendation Optimization | Quick Sort | Divide & Conquer | O(n log n) |
| 3 | Emergency Relief Supply Distribution | Fractional Knapsack | Greedy | O(n log n) |
| 4 | Smart Traffic Management | Dijkstra’s Algorithm | Graph / Shortest Path | O(V²) / O(E log V) |
| 5 | Multi-Stage Delivery Route Optimization | DP / Dijkstra’s | Optimization | O(V²) / O(E log V) |
| 6 | Disaster Relief Resource Allocation | 0/1 Knapsack | Dynamic Programming | O(nW) |
| 7 | University Timetable Scheduling | Graph Coloring (Greedy, DSATUR) | Graph Theory | NP-Hard (Approximation) |

---

## **Learning Outcomes**

Upon completion of these practical problems, students will be able to:  
- Implement and analyze classical algorithms in real-world applications.  
- Understand algorithmic design paradigms: **Divide & Conquer, Greedy, Dynamic Programming, Graph Theory**.  
- Analyze **time and space complexity** effectively.  
- Compare algorithmic performance and scalability.  
- Develop efficient, real-world, data-driven solutions.

---

### **Department of Information Technology**  
**B. Tech – Semester V**  
**Course:** Design & Analysis of Algorithms Laboratory  

---
