import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    u = employee.drop_duplicates(subset='salary').sort_values(by="salary", ascending=False)
    if len(u) >= 2:
        return pd.DataFrame({'SecondHighestSalary': [u.iloc[1]['salary']]})
    else:
        return pd.DataFrame({'SecondHighestSalary': [None]})
    