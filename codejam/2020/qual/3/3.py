heap = []
        for event in events:
            heapq.heappush(heap, event)

        current = 0
        count = 0
        while heap:
            event = heapq.heappop(heap)
            if current >= event[1]:
                continue
            elif event[0] < current + 1:
                event[0] = current + 1
                heapq.heappush(heap, event)
            else:
                current = event[0]
                count += 1
        return count
