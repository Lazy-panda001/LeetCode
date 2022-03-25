class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        extra = [];
        min_cost=0;
        n = len(costs)//2;
        for A,B in costs:
            extra.append(B-A);
            min_cost +=A;
        extra.sort();
        for i in range(n):
            min_cost +=extra[i];
        return min_cost;
        