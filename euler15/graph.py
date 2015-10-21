class Graph:
	def __init__(self, x, y):
		self.x = x
		self.y = y
		list = {}
		nodes = []
		for i in range(0, x + 1):
			for j in range(0, y + 1):
				list[(i, j)] = {}
				nodes.append((i, j))
		for key in list:
			x, y = key
			if (x + 1, y) in nodes:
				list[key][(x + 1, y)] = (x + 1, y)
			if (x, y + 1) in nodes:
				list[key][(x, y + 1)] = (x, y + 1)
			if (x - 1, y) in nodes:
				list[key][(x - 1, y)] = (x - 1, y)
			if (x, y - 1) in nodes:
				list[key][(x, y - 1)] = (x, y - 1)
		self.list = list

	def __str__(self):
		ret = ''
		for key in self.list:
			ret += str(key) + ": "
			for neighbor in self.list[key]:
				ret += str(neighbor) + ", "
			ret = ret[:-2] + '\n'
		return ret[:-1]

	def vertices(self):
		return self.list.keys()

	def neighbors(self, x, y):
		return self.list[(x, y)].keys()

	def forward_neighbors(self, x, y):
		working = self.neighbors(x, y)
		for v in working:
			if v < (x, y):
				working.remove(v)
		return working

	def remove_edge(self, xi, yi, xf, yf):
		if (xf, yf) not in self.neighbors(xi, yi):
			return
		del self.list[(xi, yi)][(xf, yf)]
		del self.list[(xf, yf)][(xi, yi)]

	def dijkstra(self, xi, yi, xf, yf):
		dist = {}
		prev = {}
		Q = []
		for i in self.vertices():
			dist[i] = float('inf')
			prev[i] = 'undef'
			Q.append(i)
		dist[(xi, yi)] = 0
		s = dist.copy()
		while len(Q) > 0:
			while True:
				u = min(s)
				if u not in Q:
					del s[u]
				else:
					break
			Q.remove(u)
			def length((u1, u2), (v1, v2)):
				if u1 + 1 == v1 and u2 + 1 == v2:
					return 2
				elif u1 == v1 and u2 + 1 == v2 or u1 + 1 == v1 and u2 == v2:
					return 1
				elif u1 == v1 and u2 - 1 == v2 or u1 - 1 == v1 and u2 == v2:
					return 1
				elif u1 - 1 == v1 and u2 - 1 == v2:
					return 2
			for v in self.neighbors(u[0], u[1]):
				alt = dist[u] + length(u, v)
				if alt < dist[v]:
					dist[v] = alt
					prev[v] = u
		S = []
		u = (xf, yf)
		while prev[u] != 'undef':
			S.append(u)
			u = prev[u]
		S.append(u)
		return S

	def num_paths(self, x1, y1, x2, y2):
		print((x1, y1))
		print(self.forward_neighbors(x1, y1))
		if (x1, y1) == (x2, y2):
			return 0
		for v in self.forward_neighbors(x1, y1):
			return 1 + self.num_paths(v[0], v[1], x2, y2)

# x = Graph(20, 20)
y = Graph(2, 2)
print(y.num_paths(0, 0, 2, 2))