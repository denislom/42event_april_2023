#!/usr/bin/perl

print "Enter a string: ";
my $input = <STDIN>;

chomp $input;

$input =~ s/[^a-zA-Z0-9]//g;
$input = lc($input);

if ($input eq reverse($input)) {
    print "The input string is a palindrome.\n";
} else {
    print "The input string is not a palindrome.\n";
}
