import Data.List 

graph = [('a', 'b', 4), ('a', 'h', 10), ('b', 'c', 8), ('b', 'h', 11),
      ('c', 'i', 2), ('c', 'f', 4), ('c', 'd', 7), ('d', 'f', 14),
      ('d', 'e', 9), ('e', 'f', 10), ('f', 'g', 2), ('g', 'h', 1), ('g', 'i', 6)
      , ('h', 'i', 7)]

vertices [] = []
vertices graph = [fst' x | x <- graph] ++ [snd' y | y <- graph]

startingPoint (x:xs)  = fst' x

removeDups [] = []
removeDups (x:xs) = nub vertices

fst' (node, _, _) = node
snd' (_, edge, _) = edge
thd' (_, _, weight) = weight