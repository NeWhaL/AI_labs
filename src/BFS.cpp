#include "../include/BFS.h"

BFS::BFS() : ASearch_algorithm() {}


State* BFS::search() {
	bool visited;
	O.push_back(start_state);
	while (!O.empty()) {
		State current = O.front();
		O.pop_front();

		if (current == target_state)
			return new State(current);
		visited = false;
		for (State& element_C : C)
		{
			if (current == element_C)
			{
				visited = true;
				break;
			}
		}
		if (!visited)
		{
			C.push_back(current);
			get_child_elements(current);
		}

	}

	return nullptr;

}