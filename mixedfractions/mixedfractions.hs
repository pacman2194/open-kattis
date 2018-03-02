readInts :: IO [Int]
readInts = fmap (map read.words) getLine
mixedFraction :: [Int] -> [Int]
mixedFraction [x,y] = [(div x y), (rem x y), y]
printFraction [x,y,z] = "" ++ show x ++ " " ++ show y ++ " / " ++ show z
main = do
    x <- readInts
    if x == [0,0] then return() 
    else do
        let y = mixedFraction x
        putStrLn (printFraction y)
        main