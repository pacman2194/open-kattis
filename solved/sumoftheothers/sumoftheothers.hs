import System.IO

readInts :: IO [Int]
readInts = fmap (map read.words) getLine
checkSum :: [Int] -> [Int]
checkSum x = if sum (init x) == (last x) then [last x] else (last x) : (init x)
helper x = do
    let y = checkSum x
    if (length y) == 1 then print (head y) else do helper y
main = do
    e <- isEOF --check for end of file
    if e then return()
    else do
        x <- readInts --get line of ints
        helper x --recursively run through list until sum init equals last
        main -- recursively call main, ends when EOF is received