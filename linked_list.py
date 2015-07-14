li=list()
li=[2,7,6,3,1,6,3,1,0]

def f(x):
    y=li[li.index(x)+1]
    #print y,
    return y

def floyd(head):
    tortoise = head
    hare = head
    while hare:
        tortoise = f(tortoise)
        #print tortoise,
        hare = f(hare)
        #print hare,
        if hare:
            hare = f(hare)
            if tortoise is hare:
                print (tortoise)
                print ("cycle found")
                break
    else:
        return(False, None)
    mu=0
    hare=head
    while hare is not tortoise:
        hare=f(hare)
        tortoise=f(tortoise)
	    mu+=1
    return (True, mu)
        
floyd(li[0])
