local sq = the_script();
sq:add(ScriptQuest.NPC_KILL, 16121);

require "define888"

function kill_16121(npc)
	
	player = me();
	local v = player.quest:vars(21102);
	if not v then return 0; end
	
	local s = v:get("state");
	local id = v:get("id");
	local type = v:get("type");
	
	return kill_npc(npc);
end
