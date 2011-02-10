/**
 * Override for fivestarDefaultResult
 */
function fivestarResult(voteResult) {
  if (voteResult.vote.id) {
	var average = voteResult.result.average;
	// Convert average to 0 to 5 scale.
	average == 0 ? average = average : average = (average / 100) * 5;
	// Format like 4.5 (extra significant digit).
	average = average.toPrecision(2);
	var count = voteResult.result.count;
	// Handle plural of vote count.
	count == 1 ? count = count + ' vote' : count = count + ' votes';
    $("div.fivestar-form-vote-" + voteResult.vote.id + "> div.fivestar-tally-box > div.fivestar-average").html(average);
    $("div.fivestar-form-vote-" + voteResult.vote.id + "> div.fivestar-tally-box > div.fivestar-count").html(count);
  }
}