def tournamentWinner(competitions, results):
    # Write your code here.
    # taha's 1st solution
    # teams = {}
    # for x in competitions:
    #     if x[0] not in teams:
    #         teams[x[0]] = 0
    #     if x[1] not in teams:
    #         teams[x[1]] = 0
            
    # for i in range(len(results)):
    #     if results[i]:
    #         teams[competitions[i][0]] += 3
    #     else :
    #         teams[competitions[i][1]] += 3
    # return max(teams, key=teams.get)

    # taha's 2nd solution 
    teams = {}            
    for i,x in enumerate(competitions):
        if x[0] not in teams:
            teams[x[0]] = 0
        if x[1] not in teams:
            teams[x[1]] = 0
        if results[i]:
            teams[x[0]] += 3
        else :
            teams[x[1]] += 3
    return max(teams, key=teams.get)   