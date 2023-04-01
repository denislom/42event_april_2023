<?php
$x = 0; 

while($x == 0) {
// prompt the user to select a move
echo "Choose rock, paper, or scissor: ";
// read the user's input from the terminal
$move = trim(fgets(STDIN));
// generate a random number between 1 and 3
$random_number = rand(1, 3);

// map the random number to a move
if ($random_number == 1) {
	$computer_move = 'rock';
} elseif ($random_number == 2) {
	$computer_move = 'paper';
} else {
	$computer_move = 'scissors';
}

// validate the move
if ($move != 'rock' && $move != 'paper' && $move != 'scissors') {
	echo "Invalid move, please select rock, paper, or scissors.\n";
} else {
	if($computer_move === $move){
		echo "The computer also chose " . $computer_move . ".\n";
	} elseif (($computer_move === 'rock' and $move === 'scissors') or 
			($computer_move === 'paper' and $move === 'rock') or
			($computer_move === 'scissors' and $move === 'paper')){
		echo "Sorry, you lost. The computer chose " . $computer_move . ".\n";
		$x = 1;
	} else {
		echo "Congratulations! You won! The computer chose " . $computer_move . ".\n";
		$x = 1;
	}
}
}
?>
