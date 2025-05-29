import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees[0:3]
    
# Problem : https://leetcode.com/problems/display-the-first-three-rows/