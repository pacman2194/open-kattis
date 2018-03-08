readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main = do
    x <- readInts
    print((head x)+((last x)-(head x))*2)