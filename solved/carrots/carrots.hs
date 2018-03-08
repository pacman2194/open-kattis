readInts :: IO [Int]
readInts = fmap (map read.words) getLine
garbageLines 0 = return ()
garbageLines x = do
    getLine
    garbageLines (x-1)
main = do
    x <- readInts
    garbageLines (head x)
    print(last x)