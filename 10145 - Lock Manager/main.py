from sys import stdin


def main():
    cases = int(stdin.readline().strip())
    for i in range(cases):
        stdin.readline()
        
        lock_manager = {}; locked_trxs = set()
        line = stdin.readline().strip()
        while line != "#":
            t, tid, iid = line.split()
            
            ans = ""
            if tid in locked_trxs:
                ans = "IGNORED"
            elif t == "X":
                if iid in lock_manager:
                    if all( tid == x[1] for x in lock_manager[iid] ):
                        ans = "GRANTED"
                        lock_manager[iid].append( (t, tid) )
                    else:
                        locked_trxs.add(tid)
                        ans = "DENIED"
                else:
                    lock_manager[iid] = [(t, tid)]
                    ans = "GRANTED"
            else:
                if iid in lock_manager:
                    if any( "X" == x[0] and tid != x[1] for x in lock_manager[iid] ):
                        locked_trxs.add(tid)
                        ans = "DENIED"
                    else:
                        ans = "GRANTED"
                        lock_manager[iid].append( (t, tid) )
                else:
                    lock_manager[iid] = [(t, tid)]
                    ans = "GRANTED"

            print(ans)
            
            line = stdin.readline().strip()
        
        if (i+1 != cases): print()

main()
