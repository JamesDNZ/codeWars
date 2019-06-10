


// check array length or if not array
if length of the array is less than 2 then return 'Array too short'

// check if more than one missing value
if the value of the last array element is (array length + 1) or more than the first element, then return 'Error in array values'
if the value of the last array element is (array length) or less than the first element, then return 'Error array values'

let missingElement equal NULL

for i = 0 to (length of the array - 1)
  let compare1 equal the value of the i'th element of the array
  let compare2 equal the value of the i+1th element of the array
  if (compare2 - compare1 is 1) then continue for loop
  else if (compare2 - compare1 is 2) and (missingElement equals NULL) then let missingElement equal compare1 + 1 and continue for loop
  else if (compare2 - compare1 is 2) and (missingElement does not equal NULL) then return 'Multiple missing values'
  else if (compare2 - compare1 is more than 2) then return 'Multiple missing values'
return 'Missing element is ' + missingElement


